# Copyright (C) 2014 Martin Abente Lahaye - tch@sugarlabs.org
# Licensed under the terms of the GNU GPL v2 or later; see COPYING for details.

. $OOB__shlib

repositories=$(read_config dextrose_updater repositories)

if [[ -n "$repositories" ]]; then
    oIFS=$IFS
    IFS=$'\n\t, '

    for repository in $repositories; do
        if [[ -n "$list" ]]; then
            list="$list $repository"
        else
            list=$repository
        fi
    done

    IFS=$oIFS

    echo "echo DEXTROSE_YUM_REPO=\\\"${list}\\\" > /etc/sysconfig/dextrose-updater"
fi

