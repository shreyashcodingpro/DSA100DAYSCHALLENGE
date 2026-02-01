$date = Get-Date "2026-02-02"

$env:GIT_AUTHOR_DATE = $date.ToString("yyyy-MM-ddTHH:mm:ss")
$env:GIT_COMMITTER_DATE = $env:GIT_AUTHOR_DATE

"Test commit" | Out-File -Append log.txt
git add .
git commit -m "Test commit"