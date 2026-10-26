/* Firmware entry: 0x480058ac */

void FUN_ram_480058ac(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_40 [7];
  undefined4 local_18 [4];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = local_18;
  local_18[0] = param_3;
  local_18[1] = param_4;
  local_18[2] = param_5;
  local_18[3] = param_6;
  uStack_8 = param_7;
  uStack_4 = param_8;
  if (param_1 != (uint *)0x0) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    iVar3 = 0;
    puVar2 = local_40;
    if (0 < param_2) {
      do {
        uVar1 = *puVar4;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        *puVar2 = uVar1;
        if (param_2 == iVar3) break;
        puVar2 = puVar2 + 1;
      } while (iVar3 != 4);
    }
    uVar5 = *param_1;
    if (-1 < (int)(uVar5 << 3)) {
      if (3 < (uVar5 >> 0x10 & 0xf)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("regdma_link.c",0x27c,"regdma_link_update_next",
                         "(head.mode < ARRAY_SIZE(updatefn))");
      }
      (**(code **)((int)&PTR_LAB_ram_480046fa_ram_481e47fc + (uVar5 >> 0xe & 0x3c)))
                (param_1,local_40[0]);
      return;
    }
    if (3 < (uVar5 >> 0x10 & 0xf)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("regdma_link.c",0x272,"regdma_link_update_next",
                       "(head.mode < ARRAY_SIZE(updatefn_b))");
    }
    (**(code **)((int)&PTR_LAB_ram_48004736_ram_481e480c + (uVar5 >> 0xe & 0x3c)))(param_1,local_40)
    ;
  }
  return;
}


