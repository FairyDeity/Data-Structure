//定义一个方法 listTest(ArrayList list, String name)，要求返回name 在 list 里面第一次出现的索引，如果 name 没出现过返回-1。

/*
public class ArrayListTest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<String> nameList = new ArrayList<>();
        nameList.add("李白");
        nameList.add("杜甫");
        nameList.add("白居易");

        while (true){
            System.out.println("--------请输入要查询的姓名--------");
            String name = in.nextLine();
            int index = listTest(nameList, name);
            if (index == -1){
                System.out.println("----------查无此人---------\n");
            } else{
                System.out.println(name + "的index是：" + index + "\n");
            }
        }
    }

    public static int listTest(ArrayList<String> list, String name){
        int size = list.size();
        for (int i = 0; i < size; i++) {
            if (list.get(i).equals(name)){
                return i;
            }
        }
        return -1;
    }
}

*/


//已知数组存放一批 QQ 号码,长度 5-11 位，
//String[] strs = {“10001”,“10086”,“12347806666”,“45612378901”,“10001”,“12347806666”}。
//将该数组里面的所有 qq 号都存放在 LinkedList 中，将 list 中重复元素删除，将 list 中所有元素分别用迭代器和增强 for 循环打印出来。
/*
public class LinkedListTest {
    public static void main(String[] args) {
        String[] strs = {"10001","10086","12347806666","45612378901","10001","12347806666"};
        LinkedList<String> qqList = getList(strs);

        // 迭代器打印
        System.out.println("------------迭代器------------");
        Iterator<String> i = qqList.iterator();
        while (i.hasNext()){
            System.out.print(i.next() + " ");
        }

        System.out.println();

        // 增强for循环打印
        System.out.println("----------增强for循环---------");
        for (String name: qqList) {
            System.out.print(name +" ");
        }


    }

    // 获取无重复的List
    public static LinkedList<String> getList(String[] strs){
        LinkedList<String> list = new LinkedList<>();
        for (int i = 0; i < strs.length; i++) {
            if (!list.contains(strs[i])){
                list.add(strs[i]);
            }
        }
        return list;
    }
}
*/

