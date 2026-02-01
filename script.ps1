$startDate = Get-Date "2026-02-02"
$endDate   = Get-Date "2026-05-02"

$totalCommits = 100
$totalDays = ($endDate - $startDate).Days

for ($i=0; $i -lt $totalCommits; $i++) {

    # spread commits evenly across date range
    $offset = [math]::Floor(($i / $totalCommits) * $totalDays)
    $date = $startDate.AddDays($offset)

    $env:GIT_AUTHOR_DATE = $date.ToString("yyyy-MM-ddTHH:mm:ss")
    $env:GIT_COMMITTER_DATE = $env:GIT_AUTHOR_DATE

    "Day $($i+1)" | Out-File -Append log.txt
    git add .
    git commit -m "Day $($i+1) commit"
}