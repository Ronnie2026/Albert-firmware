/* Firmware entry: 0x4812fa26 */

int FUN_ram_4812fa26(uint param_1,uint param_2,int param_3,undefined4 *param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 auStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((0xffffff < param_1) || (0x1000000 < param_2)) || (0x1000000 - param_2 < param_1)) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"flash_mmap",
                     "E (%lu) %s: Address 0x%08x is out of range for 24bit flash mapping, see CONFIG_BOOTLOADER_CACHE_32BIT_ADDR_QUAD_FLASH and CONFIG_BOOTLOADER_CACHE_32BIT_ADDR_OCTAL_FLASH for more details\n"
                     ,uVar3,"flash_mmap",param_1);
    return 0x102;
  }
  auStack_34[0] = 0;
  piVar1 = (int *)FUN_ram_4ff2091a(1,8,0x800);
  iVar4 = 0x101;
  if (piVar1 == (int *)0x0) {
    return 0x101;
  }
  puVar2 = (undefined4 *)FUN_ram_4ff2091a(1,4,0x800);
  if (puVar2 == (undefined4 *)0x0) {
LAB_ram_4812fb44:
    thunk_FUN_ram_4ff209c6(piVar1);
  }
  else {
    *piVar1 = (int)puVar2;
    uVar3 = 0x12;
    if (param_3 == 1) {
      uVar3 = 9;
    }
    iVar4 = FUN_ram_481a6330(param_1,param_2,1,uVar3,1,auStack_34);
    if (iVar4 == 0) {
      *puVar2 = auStack_34[0];
      piVar1[1] = 1;
    }
    else {
      if (iVar4 != 0x103) {
        thunk_FUN_ram_4ff209c6(puVar2);
        goto LAB_ram_4812fb44;
      }
      piVar1[1] = 0;
    }
    *param_4 = auStack_34[0];
    *param_5 = (int)piVar1;
    iVar4 = 0;
  }
  return iVar4;
}


