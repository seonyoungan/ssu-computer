
class listNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class solution(object):
    def sortlist(self, head):

        def get_mid(head):
            s = f = head
            while f and f.next:
                s, f = s.next, f.next.next
            return s.val

    #l, m, r 리스트 나누는 함수
    #초기 노드의 val 0으로 초기화
    def  partition(head, val):
        fake_l = l = listNode(0)
        fake_m = m = listNode(0)
        fake_r = r = listNode(0)
        cur = head
        #head에 연결된 노드 순회
        while cur:
            if cur.val < val:
                l.next = cur
                l = l.next

            elif cur.val == val:
                m.next = cur
                m = m.next
            else:
                r.next = cur
                r = r.next

            cur = cur.next
        l.next, m.next, r.next = None, None, None
        return fake_l.next, fake_m.next, fake_r.next