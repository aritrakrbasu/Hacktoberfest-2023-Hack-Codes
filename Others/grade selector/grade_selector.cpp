char grade_selector(int score){
	if(score<=30 and score>25){
		return 'A'
	}
	else if(score<=25 and score>20){
		return 'B';
	}
	else if(score<=20 and score>15){
		return 'C';
	}
	else if(score<=15 and score>10){
		return 'D';
	}
	else if(score<=10 and score>5){
		return 'E';
	}
	else{
		return 'F';
		//if the score is greater than 30 then also it will return 'F'
	}
}