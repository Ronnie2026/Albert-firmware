/* Firmware entry: 0x4802e73a */

void FUN_ram_4802e73a(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = 0x86e00;
  iVar4 = 0;
  do {
    iVar3 = DAT_ram_4ff6dc9c;
    iVar2 = DAT_ram_4ff6dc94;
    FUN_ram_4ff454c4(DAT_ram_4ff6dc9c + iVar5,iVar5 + -0x86e00 + DAT_ram_4ff6dc94);
    iVar2 = iVar2 + iVar4 * 0x50;
    iVar3 = iVar4 * 0x50 + iVar3;
    *(undefined4 *)(iVar3 + 0x86e44) = *(undefined4 *)(iVar2 + 0x44);
    uVar1 = *(undefined1 *)(iVar2 + 0x4c);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar3 + 0x86e48) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined1 *)(iVar3 + 0x86e4c) = uVar1;
    iVar5 = iVar5 + 0x50;
  } while (iVar4 != 8);
  return;
}


