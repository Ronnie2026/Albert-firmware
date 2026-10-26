/* Firmware entry: 0x4813d8b4 */

void FUN_ram_4813d8b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6e1bc = DAT_ram_4ff6e1bc + '\x01';
  iVar2 = DAT_ram_4ff6e1c4;
  while (iVar1 = iVar2, iVar1 != 0) {
    if (*(char *)(iVar1 + 0x4a) == DAT_ram_4ff6e1bc) {
      iVar2 = *(int *)(iVar1 + 0x34);
    }
    else {
      uVar4 = *(ushort *)(iVar1 + 0x46);
      *(char *)(iVar1 + 0x4a) = DAT_ram_4ff6e1bc;
      if ((uVar4 & 1) != 0) {
        *(ushort *)(iVar1 + 0x46) = uVar4 | 2;
        FUN_ram_48141ae6(iVar1);
        uVar4 = *(ushort *)(iVar1 + 0x46) & 0xfffc;
        *(ushort *)(iVar1 + 0x46) = uVar4;
      }
      if ((uVar4 & 8) != 0) {
        *(ushort *)(iVar1 + 0x46) = uVar4 & 0xfff7;
        FUN_ram_4813c0ca(iVar1);
      }
      iVar3 = *(int *)(iVar1 + 0x34);
      iVar2 = iVar3;
      if (*(int *)(iVar1 + 0xc4) != 0) {
        DAT_ram_4ff6e1be = '\0';
        FUN_ram_4813d812(iVar1);
        iVar2 = DAT_ram_4ff6e1c4;
        if (DAT_ram_4ff6e1be == '\0') {
          iVar2 = iVar3;
        }
      }
    }
  }
  return;
}


