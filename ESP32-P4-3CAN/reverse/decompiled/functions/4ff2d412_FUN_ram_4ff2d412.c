/* Firmware entry: 0x4ff2d412 */

undefined4 FUN_ram_4ff2d412(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (longlong *)0x0) {
    return 0x102;
  }
  if (DAT_ram_4ff6e168 != 0) {
    lVar3 = FUN_ram_4ff21a0a();
    bVar1 = *(byte *)((int)param_1 + 0xf);
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(&DAT_ram_4ff47f68 + (bVar1 & 1) * 8,0xffffffff);
    uVar2 = 0x103;
    if ((int)*param_1 == 0 && *(int *)((int)param_1 + 4) == 0) {
      *param_1 = lVar3 + CONCAT44(param_3,param_2);
      *(undefined4 *)(param_1 + 1) = 0;
      *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) & 0xff000000;
      FUN_ram_4ff2d312(param_1,0);
      uVar2 = 0;
    }
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47f68 + (bVar1 & 1) * 8);
    return uVar2;
  }
  return 0x103;
}


