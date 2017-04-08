#include "rtree-implementation.cpp"
#include <typeinfo>
class DataIndexingWrapper:public SpatialIndexInterface{
	
	
	public:
		
		PointSpatialIndexR P;
		RectangleSpatialIndexR R;
		
		void createIndex(PointCollection points){
			
			cout<<"R Tree create index point"<<endl;
			P.createIndex(points);
			
			
		}	
		void createIndex(RectangleCollection rects){
			
			
			cout<<"R Tree create index rectangle"<<endl;
			R.createIndex(rects);
		}
	
		PointCollection searchPoint(Rectangle r){
			
			
			cout<<"R Tree search point"<<endl;
			PointCollection p=P.searchPoint(r);
			return p;
				
		}
		RectangleCollection searchRectangle(Rectangle r){
			
			cout<<"R Tree search rect"<<endl;
			RectangleCollection rc = R.searchRectangle(r);
			return rc;
		}
		
		bool update(PointCollection p){
			
			cout<<"R Tree update index point"<<endl;
			bool r = P.update(p);
			return r;
		}
		bool update(RectangleCollection p){
			
			cout<<"R Tree update index rect"<<endl;
			bool r = R.update(p);
			return r;
		}
		
		bool deleteIndex(){
			
			cout<<"R Tree delete under construction"<<endl;
			return true;
		}
};

int main(){

	DataIndexingWrapper d;
	

	return 0;
}
