/* Firmware entry: 0x4814c63e */

short FUN_ram_4814c63e(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4814a1fa();
  if (((iVar2 == -1) || (sVar1 = *(short *)(&DAT_ram_4ff6d144 + iVar2 * 0x30), sVar1 == 0)) &&
     (sVar1 = 0x500, param_2 != 0)) {
    sVar1 = *(short *)(param_2 + 0xde);
  }
  return sVar1;
}


