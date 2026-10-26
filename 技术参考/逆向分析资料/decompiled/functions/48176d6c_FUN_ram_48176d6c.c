/* Firmware entry: 0x48176d6c */

int FUN_ram_48176d6c(int *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  size_t __n;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *__s;
  byte *__s_00;
  byte abStack_60 [68];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return -0x5100;
  }
  if (*param_1 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return -0x5100;
  }
  __s_00 = (byte *)param_1[2];
  if (__s_00 == (byte *)0x0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return -0x5100;
  }
  __n = (size_t)*(byte *)(*param_1 + 5);
  if (__n < param_3) {
    iVar2 = FUN_ram_48176bfe();
    if (((iVar2 != 0) || (iVar2 = FUN_ram_48176c62(param_1,param_2,param_3), iVar2 != 0)) ||
       (iVar2 = FUN_ram_48176caa(param_1,abStack_60), iVar2 != 0)) goto LAB_ram_48176e10;
    __s_00 = (byte *)param_1[2];
    param_3 = (uint)*(byte *)(*param_1 + 4);
    __n = (size_t)*(byte *)(*param_1 + 5);
    param_2 = abStack_60;
  }
  __s = __s_00 + __n;
  memset(__s_00,0x36,__n);
  memset(__s,0x5c,(uint)*(byte *)(*param_1 + 5));
  if (param_3 != 0) {
    pbVar3 = param_2;
    pbVar5 = __s_00;
    do {
      bVar1 = *pbVar3;
      pbVar4 = pbVar5 + 1;
      pbVar3 = pbVar3 + 1;
      *pbVar5 = *pbVar5 ^ bVar1;
      pbVar5 = pbVar4;
    } while (pbVar4 != __s_00 + param_3);
    pbVar3 = __s;
    do {
      bVar1 = *param_2;
      pbVar5 = pbVar3 + 1;
      param_2 = param_2 + 1;
      *pbVar3 = *pbVar3 ^ bVar1;
      pbVar3 = pbVar5;
    } while (__s + param_3 != pbVar5);
  }
  iVar2 = FUN_ram_48176bfe(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_48176c62(param_1,__s_00,*(undefined1 *)(*param_1 + 5));
  }
LAB_ram_48176e10:
  FUN_ram_48178af2(abStack_60,0x40);
  return iVar2;
}


