for ($i=1; $i -le 100; $i++) {

    $date = (Get-Date "2026-02-02").AddDays($i)

    $env:GIT_AUTHOR_DATE = $date.ToString("yyyy-MM-ddTHH:mm:ss")
    $env:GIT_COMMITTER_DATE = $env:GIT_AUTHOR_DATE

    Add-Content log.txt "Day $i $(Get-Date)"

    git add .
    git commit -m "Day $i commit"
}