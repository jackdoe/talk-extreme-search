if [ $# -eq 0 ]; then
    echo "usage $0 'commit message'"
    exit 1
fi
git checkout 20m
git commit -a -m "$1"
git push origin 20m
git checkout gh-pages
git merge 20m
git push origin gh-pages
git checkout 20m
