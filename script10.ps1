$startDate = Get-Date "2024-02-02"
$endDate   = Get-Date "2024-05-03"

$totalDays = ($endDate - $startDate).Days

for ($i=0; $i -le $totalDays; $i++) {

    $date = $startDate.AddDays($i)

    $env:GIT_AUTHOR_DATE = $date.ToString("yyyy-MM-ddTHH:mm:ss")
    $env:GIT_COMMITTER_DATE = $env:GIT_AUTHOR_DATE

    Add-Content log.txt "Day $($i+1) $(Get-Date)"
    git add .
    git commit -m "Day $($i+1) commit"
}