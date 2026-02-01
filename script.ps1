for ($i=0; $i -lt 90; $i++) {
    $date = (Get-Date "2026-02-02").AddDays($i)

    $env:GIT_AUTHOR_DATE = $date.ToString("yyyy-MM-ddTHH:mm:ss")
    $env:GIT_COMMITTER_DATE = $env:GIT_AUTHOR_DATE

    "Day $($i+1)" | Out-File -Append log.txt
    git add .
    git commit -m "Day $($i+1) commit"
}