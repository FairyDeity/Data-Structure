//����һ������ listTest(ArrayList list, String name)��Ҫ�󷵻�name �� list �����һ�γ��ֵ���������� name û���ֹ�����-1��

/*
public class ArrayListTest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<String> nameList = new ArrayList<>();
        nameList.add("���");
        nameList.add("�Ÿ�");
        nameList.add("�׾���");

        while (true){
            System.out.println("--------������Ҫ��ѯ������--------");
            String name = in.nextLine();
            int index = listTest(nameList, name);
            if (index == -1){
                System.out.println("----------���޴���---------\n");
            } else{
                System.out.println(name + "��index�ǣ�" + index + "\n");
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


//��֪������һ�� QQ ����,���� 5-11 λ��
//String[] strs = {��10001��,��10086��,��12347806666��,��45612378901��,��10001��,��12347806666��}��
//����������������� qq �Ŷ������ LinkedList �У��� list ���ظ�Ԫ��ɾ������ list ������Ԫ�طֱ��õ���������ǿ for ѭ����ӡ������
/*
public class LinkedListTest {
    public static void main(String[] args) {
        String[] strs = {"10001","10086","12347806666","45612378901","10001","12347806666"};
        LinkedList<String> qqList = getList(strs);

        // ��������ӡ
        System.out.println("------------������------------");
        Iterator<String> i = qqList.iterator();
        while (i.hasNext()){
            System.out.print(i.next() + " ");
        }

        System.out.println();

        // ��ǿforѭ����ӡ
        System.out.println("----------��ǿforѭ��---------");
        for (String name: qqList) {
            System.out.print(name +" ");
        }


    }

    // ��ȡ���ظ���List
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

