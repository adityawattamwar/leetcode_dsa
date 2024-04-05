class MyCalendar {
    List<List<Integer>> l;
    public MyCalendar() {
        l=new ArrayList<>();
    }
    
    public boolean book(int start, int end) {
        boolean flag = true;
        for(List<Integer> a:l){
            if(start<a.get(1) && end>a.get(0)){
                flag=false;
            }
        }
        if(flag==true){
            List<Integer> a=new ArrayList<>();
            a.add(start);
            a.add(end);
            l.add(new ArrayList<>(a));
            return true;
        }
        return false;
    }
}