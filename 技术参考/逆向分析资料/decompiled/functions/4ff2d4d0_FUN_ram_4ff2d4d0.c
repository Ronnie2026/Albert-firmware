/* Firmware entry: 0x4ff2d4d0 */

/* WARNING: Removing unreachable block (ram,0x4ff2d584) */

undefined4 FUN_ram_4ff2d4d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = CONCAT44(param_3,param_2);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  if (DAT_ram_4ff6e168 == 0) {
    return 0x103;
  }
  uVar3 = FUN_ram_4ff219e8();
  if (uVar5 <= uVar3) {
    uVar5 = FUN_ram_4ff219e8();
  }
  lVar4 = FUN_ram_4ff21a0a();
  bVar1 = *(byte *)((int)param_1 + 0xf);
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f68 + (bVar1 & 1) * 8,0xffffffff);
  uVar2 = 0x103;
  if (*param_1 == 0 && param_1[1] == 0) {
    param_1[1] = (int)(lVar4 + uVar5 >> 0x20);
    param_1[2] = (int)uVar5;
    *param_1 = (int)(lVar4 + uVar5);
    param_1[3] = param_1[3] & 0xff000000U | (uint)(uVar5 >> 0x20) & 0xffffff;
    FUN_ram_4ff2d312(param_1,0);
    uVar2 = 0;
  }
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f68 + (bVar1 & 1) * 8);
  return uVar2;
}


