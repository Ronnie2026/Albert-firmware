/* Firmware entry: 0x4ff3ee10 */

void FUN_ram_4ff3ee10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_csreg_0347;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("spinlock.h",0xb5,"spinlock_release","lock");
  }
  DAT_csreg_0347 = 0x7f;
  iVar2 = 0xabab;
  if (mhartid == 0) {
    iVar2 = 0xcdcd;
  }
  if (*param_1 != iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("spinlock.h",0xbe,"spinlock_release","core_owner_id == lock->owner");
  }
  uVar3 = param_1[1] - 1;
  param_1[1] = uVar3;
  if (uVar3 == 0) {
    *param_1 = -0x4cc00001;
  }
  else if (0xff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("spinlock.h",0xc4,"spinlock_release","lock->count < 0x100");
  }
  iVar2 = *(int *)(&DAT_ram_4ff6da6c + mhartid * 4);
  DAT_csreg_0347 = uVar1;
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    *(int *)(&DAT_ram_4ff6da6c + mhartid * 4) = iVar2;
    if (iVar2 == 0) {
      DAT_csreg_0347 = *(undefined4 *)(&DAT_ram_4ff6da64 + mhartid * 4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port.c",0x230,"vPortExitCriticalMultiCore","nesting > 0");
}


