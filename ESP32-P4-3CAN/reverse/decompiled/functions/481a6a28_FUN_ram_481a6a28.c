/* Firmware entry: 0x481a6a28 */

undefined4 FUN_ram_481a6a28(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): null pointer\n",uVar3,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_vaddr_to_paddr",0x325);
  }
  else {
    iVar2 = FUN_ram_4ff416ee(0,param_1,1,3);
    puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
    if (iVar2 != 0) {
      uStack_28 = 0;
      auStack_24[0] = 0;
      FUN_ram_4ff216d6(&DAT_ram_4ff6c438);
      uVar3 = FUN_ram_4ff4172a(param_1);
      iVar2 = FUN_ram_4ff4150a(uVar3,param_1,&uStack_28,auStack_24);
      FUN_ram_4ff216e2(&DAT_ram_4ff6c438);
      puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
      if (iVar2 == 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): vaddr isn\'t mapped\n",uVar3,
                         PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_vaddr_to_paddr",0x32c);
        uVar3 = 0x105;
      }
      else {
        *param_2 = uStack_28;
        *param_3 = auStack_24[0];
        uVar3 = 0;
      }
      return uVar3;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): not a valid external virtual address\n",uVar3,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_vaddr_to_paddr",0x326);
  }
  return 0x102;
}


