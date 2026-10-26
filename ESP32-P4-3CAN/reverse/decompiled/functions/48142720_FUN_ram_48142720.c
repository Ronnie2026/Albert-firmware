/* Firmware entry: 0x48142720 */

uint FUN_ram_48142720(void)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e204 != 0) {
    iVar1 = thunk_FUN_ram_4ff3c5d4();
    uVar2 = *(int *)(DAT_ram_4ff6e204 + 4) - iVar1;
    return uVar2 & 0xffffffffU - ((int)uVar2 >> 0x1f);
  }
  return 0xffffffff;
}


