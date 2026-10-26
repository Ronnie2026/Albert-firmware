/* Firmware entry: 0x4812eb0c */

undefined4 FUN_ram_4812eb0c(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff20644();
  uVar4 = 0;
  if ((param_1 != 0xffff) && (uVar1 < param_1)) {
    uVar3 = FUN_ram_4ff44d14();
    uVar4 = 0xffffffff;
    FUN_ram_4ff44bf0(1,"boot_comm",
                     "E (%lu) %s: Image requires efuse blk rev >= v%lu.%lu, but chip is v%lu.%lu\n",
                     uVar3,"boot_comm",param_1 / 100,param_1 % 100,uVar1 / 100,uVar1 % 100);
  }
  if ((((param_2 != 0xffff) && (param_2 != 0)) && (param_2 < uVar1)) &&
     (iVar2 = FUN_ram_4ff20674(), iVar2 == 0)) {
    uVar3 = FUN_ram_4ff44d14();
    uVar4 = 0xffffffff;
    FUN_ram_4ff44bf0(1,"boot_comm",
                     "E (%lu) %s: Image requires efuse blk rev <= v%lu.%lu, but chip is v%lu.%lu\n",
                     uVar3,"boot_comm",param_2 / 100,param_2 % 100,uVar1 / 100,uVar1 % 100);
  }
  return uVar4;
}


