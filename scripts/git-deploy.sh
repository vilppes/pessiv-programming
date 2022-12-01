#!/bin/bash
git add *
echo "commit message: "
read commitmessage
git commit -m "$commitmessage"
git push
