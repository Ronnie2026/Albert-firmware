/* Firmware entry: 0x480053ba */

int FUN_ram_480053ba(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  if ((int)(uVar2 << 3) < 0) {
    if (3 < (uVar2 >> 0x10 & 0xf)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("regdma_link.c",0x171,"regdma_link_get_next",
                       "head.mode < ARRAY_SIZE(nextfn1)");
    }
    iVar1 = (**(code **)((int)&PTR_LAB_ram_480046ee_ram_481e48e8 + (uVar2 >> 0xe & 0x3c)))();
    if (3 < param_2) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + param_2 * 4);
  }
  else {
    if (3 < (uVar2 >> 0x10 & 0xf)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("regdma_link.c",0x17e,"regdma_link_get_next",
                       "head.mode < ARRAY_SIZE(nextfn0)");
    }
    iVar1 = (**(code **)((int)&PTR_LAB_ram_480046e2_ram_481e48d8 + (uVar2 >> 0xe & 0x3c)))();
  }
  if ((iVar1 != 0) && (-1 < (int)uVar2)) {
    return iVar1;
  }
  return 0;
}


