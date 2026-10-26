/* Firmware entry: 0x4818ac4a */

void FUN_ram_4818ac4a(ulonglong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_48000386(&PTR_DAT_ram_481e39bc_ram_4ff47d80);
  auStack_14[0] = 0;
  iVar2 = FUN_ram_48000378(&PTR_DAT_ram_481e39bc_ram_4ff47d80,auStack_14,uVar1);
  uVar4 = 0;
  if (iVar2 == 0) {
    uVar3 = auStack_14[0] & 0xff;
    if ((auStack_14[0] & 0x100) != 0) {
      uVar3 = -uVar3;
    }
    uVar4 = (ulonglong)(uint)(float)(int)uVar3;
  }
  *param_1 = uVar4;
  return;
}


