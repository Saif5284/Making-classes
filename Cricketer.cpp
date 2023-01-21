#include <iostream>
using namespace std;
class cricketer{
	protected:
		string name;
		string dob;
		int shirtno;
		int odi_rating;
		int test_rating;
		int t20_rating;
		int startyear;
		public:
			cricketer(){
				cout<<"Cricketer Data"<<endl;
			}
			~cricketer(){
				cout<<"Destructor of cricketer"<<endl;
			}
			cricketer(string name,string dob,int shirtno,int odi_rating,int t20_rating,int test_rating,int year)
	    {
		name=name;
		dob=dob;
		shirtno=shirtno;
		odi_rating=odi_rating;
		t20_rating=t20_rating;
		test_rating=test_rating;
		startyear=year;	
	}
};
	void player(int calculateExperience,int calculateAge,int changeodirating,int changetestrating,int changet20rating)
	{
		cout<<"Player Experience"<<endl;
		cout<<"Player Age"<<endl;
		cout<<"Player odi rating"<<endl;
		cout<<"Player test rating"<<endl;
		cout<<"Player t20 rating"<<endl;
	}
class bowler:public cricketer{
	protected:
	string type;
	int total_wickets;
	int match_played;	
	public:
		bowler(){
			cout<<"Bowler"<<endl;
		}
		~bowler(){
				cout<<"Destructor of bowler"<<endl;
				}
		bowler(string type,int total_wickets,int match_played)
		{
				type=type;
			total_wickets=total_wickets;
			match_played=match_played;
		}
};
class batsman:public cricketer{
	protected:
	string type;
	int total_runs;
	int match_played;
	int best_score;
	public:
		batsman(){
			cout<<"Batsman"<<endl;
		}
		~batsman(){
				cout<<"Destructor of batsman"<<endl;
				}
		batsman(string type,int total_runs,int match_played,int best_score)
		{
			type=type;
			total_runs=total_runs;
			match_played=match_played;
			best_score=best_score;
		}
		
};
class AllRounder:public bowler,public batsman{
		public:

};

int main() {
	
	return 0;
}
