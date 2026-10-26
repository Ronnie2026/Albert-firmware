/* Firmware entry: 0x4808acac */

undefined8 FUN_ram_4808acac(uint param_1,int param_2)

{
  uint __n;
  char *__s;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcStack_5c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((0x800 < param_1) || (param_1 == 0)) {
    return 0;
  }
  iVar3 = 0;
  pcStack_5c = (char *)0x0;
  uVar5 = 0;
LAB_ram_4808ad00:
  __n = param_1 - uVar5;
  __s = (char *)(param_2 + uVar5);
  pvVar1 = memchr(__s,0x3b,__n);
  if (pvVar1 == (void *)0x0) {
    iVar4 = -1;
LAB_ram_4808ad2e:
    do {
      if ((*__s != ' ') && (*__s != '\t')) goto LAB_ram_4808ad70;
      __n = __n - 1;
      __s = __s + 1;
    } while (__n != 0);
    goto LAB_ram_4808ad40;
  }
  iVar4 = (int)pvVar1 - param_2;
  if (iVar4 == -1) goto LAB_ram_4808ad2e;
  if (iVar4 - uVar5 < __n) {
    __n = iVar4 - uVar5;
  }
  if (__n != 0) goto LAB_ram_4808ad2e;
  goto LAB_ram_4808ad44;
  while (__n = uVar5, uVar5 != 0) {
LAB_ram_4808ad70:
    uVar5 = __n - 1;
    if ((__s[uVar5] != ' ') && (__s[uVar5] != '\t')) {
      if ((5 < __n) && (iVar2 = FUN_ram_4ff4511a(__s,"P4SID=",6), iVar2 == 0)) {
        if (iVar3 != 0) {
          iVar3 = 0;
          pcStack_5c = (char *)0x0;
          goto LAB_ram_4808ad4c;
        }
        pcStack_5c = __s + 6;
        if (__n != 0x26) {
          pcStack_5c = (char *)0x0;
          goto LAB_ram_4808ad4c;
        }
        iVar3 = 0x20;
      }
      break;
    }
  }
LAB_ram_4808ad40:
  if (iVar4 == -1) goto LAB_ram_4808ad4c;
LAB_ram_4808ad44:
  uVar5 = iVar4 + 1;
  if (param_1 <= uVar5) {
LAB_ram_4808ad4c:
    return CONCAT44(pcStack_5c,iVar3);
  }
  goto LAB_ram_4808ad00;
}


