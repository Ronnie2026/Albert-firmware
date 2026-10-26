/* Firmware entry: 0x481559ea */

void FUN_ram_481559ea(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  if ((*(byte *)(iVar2 + 10) != 0) && (*(byte *)(iVar2 + 10) <= *(byte *)(iVar2 + 0xd2))) {
    if ((char)param_1[4] == '\t') {
      *(undefined1 *)(iVar2 + 0x21) = 9;
      FUN_ram_481550ac(iVar2,"Peer not responding");
      *(undefined1 *)(iVar2 + 0xd2) = 0;
    }
    else {
      *(undefined1 *)(iVar2 + 0xd2) = 0;
    }
  }
  if ((char)param_1[4] == '\t') {
    cVar1 = *(char *)(iVar2 + 0xd3);
    uStack_12 = *(ushort *)(iVar2 + 0x6c) >> 8 | *(ushort *)(iVar2 + 0x6c) << 8;
    *(char *)(iVar2 + 0xd3) = cVar1 + '\x01';
    uStack_13 = (undefined1)((uint)*(undefined4 *)(iVar2 + 0x6c) >> 0x10);
    uStack_14 = (undefined1)((uint)*(undefined4 *)(iVar2 + 0x6c) >> 0x18);
    FUN_ram_48155f4a(param_1,9,cVar1,&uStack_14,4);
    *(char *)(iVar2 + 0xd2) = *(char *)(iVar2 + 0xd2) + '\x01';
    if ((char)param_1[4] == '\t') {
      FUN_ram_4814268a(&LAB_ram_48155ace,param_1);
      FUN_ram_48142636((uint)*(byte *)(iVar2 + 9) * 1000,&LAB_ram_48155ace,param_1);
      *(byte *)(iVar2 + 0x22) = *(byte *)(iVar2 + 0x22) | 0x40;
      return;
    }
  }
  return;
}


