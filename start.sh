git pull
while true; do
	#sleep 5; bash a.sh
#	sleep $((20 * 60)) 
	sleep 2
	git add .
	git commit -m "$(date +'%d/%m/%Y-%H:%M')"
	#git commit -m 'echo $(date)'
	if [[ $(git commit -m "$(date +'%d/%m/%Y-%H:%M')") ]]
	then
		echo "Commit Basarili $(date "+Zaman: %D %T")" >> log_kaydi.txt
	else
		echo "Commit basarisiz $(date "+Zaman: %D %T")" >> log_kaydi.txt
	fi
	git push
done
