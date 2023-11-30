#import<iostream>

int main(){
	
	int i, sum = 0;
	for(i=0;i<6;i++){
		if(i%3)
		sum+=i;
	}
	std::cout<<sum;
	
	return 0;
}
