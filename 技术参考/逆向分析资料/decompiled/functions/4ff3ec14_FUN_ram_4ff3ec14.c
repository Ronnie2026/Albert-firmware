/* Firmware entry: 0x4ff3ec14 */

undefined4 FUN_ram_4ff3ec14(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_csreg_0347;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_csreg_0347 = 0x7f;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("spinlock.h",0x54,"spinlock_acquire","lock");
  }
  DAT_csreg_0347 = 0x7f;
  if (mhartid == 0) {
    iVar4 = 0xcdcd;
    iVar5 = 0xabab;
    if (*param_1 != 0xcdcd) goto LAB_ram_4ff3eca8;
  }
  else {
    iVar4 = 0xabab;
    iVar5 = 0xcdcd;
    if (*param_1 != 0xabab) {
LAB_ram_4ff3eca8:
      iVar3 = FUN_ram_4ff2fb38(param_1,0xb33fffff,iVar4);
      iVar2 = cycle;
      if (iVar3 == 0) {
        if (param_2 == 0) {
LAB_ram_4ff3ece6:
          if ((*param_1 != -0x4cc00001) && (iVar5 != *param_1)) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("spinlock.h",0x91,"spinlock_acquire",
                             "lock->owner == SPINLOCK_FREE || lock->owner == other_core_owner_id");
          }
          if ((uint)param_1[1] < 0xff) {
            DAT_csreg_0347 = uVar1;
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("spinlock.h",0x92,"spinlock_acquire","lock->count < 0xFF");
        }
        if (param_2 != 0xffffffff) {
          do {
            iVar3 = FUN_ram_4ff2fb38(param_1,0xb33fffff,iVar4);
            if (iVar3 != 0) goto LAB_ram_4ff3ed2e;
          } while ((uint)(cycle - iVar2) <= param_2);
          goto LAB_ram_4ff3ece6;
        }
        do {
          iVar5 = FUN_ram_4ff2fb38(param_1,0xb33fffff,iVar4);
        } while (iVar5 == 0);
      }
LAB_ram_4ff3ed2e:
      if (iVar4 != *param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("spinlock.h",0x8d,"spinlock_acquire","lock->owner == core_owner_id");
      }
      if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("spinlock.h",0x8e,"spinlock_acquire","lock->count == 0");
      }
      iVar4 = 1;
      goto LAB_ram_4ff3ec64;
    }
  }
  if (0xfd < param_1[1] - 1U) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("spinlock.h",0x6a,"spinlock_acquire","lock->count > 0 && lock->count < 0xFF");
  }
  iVar4 = param_1[1] + 1;
LAB_ram_4ff3ec64:
  param_1[1] = iVar4;
  iVar4 = *(int *)(&DAT_ram_4ff6da6c + mhartid * 4) + 1;
  *(int *)(&DAT_ram_4ff6da6c + mhartid * 4) = iVar4;
  if (iVar4 == 1) {
    *(undefined4 *)(&DAT_ram_4ff6da64 + mhartid * 4) = uVar1;
  }
  DAT_csreg_0347 = 0x7f;
  return 1;
}


