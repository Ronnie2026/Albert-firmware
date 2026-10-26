/* Firmware entry: 0x4ff32b00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff32b00(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = _DAT_ram_50111040 & 3;
  if ((uVar1 != 1) && (uVar1 != 2)) {
    uVar1 = (-(uint)(uVar1 == 0) & 0xfffffffd) + 3;
  }
  uVar2 = FUN_ram_4ff32a4c(uVar1);
  if (uVar2 != 0) {
    uVar6 = (_DAT_ram_500e6004 >> 5 & 0xff) + 1;
    uVar5 = _DAT_ram_500e6004 >> 0xd & 0xff;
    uVar7 = _DAT_ram_500e6004 >> 0x15 & 0xff;
    if (uVar7 == 0) {
      uVar7 = 1;
      uVar5 = 0;
      uVar3 = uVar6;
      uVar4 = uVar2;
    }
    else {
      uVar3 = uVar6 * uVar7 + uVar5;
      uVar4 = uVar2 * uVar7;
    }
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar5;
    param_1[5] = uVar4 / uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


