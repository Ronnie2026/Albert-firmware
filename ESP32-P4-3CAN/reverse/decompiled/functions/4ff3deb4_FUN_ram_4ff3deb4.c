/* Firmware entry: 0x4ff3deb4 */

undefined4 FUN_ram_4ff3deb4(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  piVar2 = &DAT_ram_4ff6da3c + mhartid;
  uVar1 = *(undefined4 *)(*piVar2 + 0x18);
  *(int *)(*piVar2 + 0x18) = 0x19 - *(int *)(*piVar2 + 0x2c);
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return uVar1;
}


