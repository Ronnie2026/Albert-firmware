/* Firmware entry: 0x481a687a */

undefined4 FUN_ram_481a687a(uint param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): null pointer\n",uVar3,
                     PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_unmap",0x28c);
    return 0x102;
  }
  FUN_ram_4ff216d6(&DAT_ram_4ff6c438);
  puVar1 = PTR_DAT_ram_481d4b48_ram_4ff52f94;
  if (DAT_ram_4ff6c3e4 == 0) {
LAB_ram_481a6934:
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,puVar1,
                     "E (%lu) %s: %s(%d): munmap target pointer is outside external memory regions\n"
                     ,uVar3,PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_unmap",0x29c);
    goto LAB_ram_481a696c;
  }
  param_1 = param_1 & 0xfffffff;
  if ((param_1 < DAT_ram_4ff6c3f8) || (DAT_ram_4ff6c3f0 <= param_1)) {
    if (((DAT_ram_4ff6c3e4 == 1) || (param_1 < DAT_ram_4ff6c420)) || (DAT_ram_4ff6c418 <= param_1))
    goto LAB_ram_481a6934;
LAB_ram_481a68c2:
    puVar4 = &DAT_ram_4ff6c410;
  }
  else {
    if ((DAT_ram_4ff6c3e4 != 1) && ((DAT_ram_4ff6c420 <= param_1 && (param_1 < DAT_ram_4ff6c418))))
    goto LAB_ram_481a68c2;
    puVar4 = &DAT_ram_4ff6c3e8;
  }
  puVar5 = (uint *)puVar4[8];
  puVar2 = puVar5;
  if (puVar5 != (uint *)0x0) {
    while (puVar2 = (uint *)puVar2[9], puVar2 != (uint *)0x0) {
      if (((puVar2 != puVar5) && (puVar2 != (uint *)**(undefined4 **)(puVar4[9] + 4))) &&
         (param_1 == *puVar2)) {
        uVar6 = puVar2[10];
        piVar7 = (int *)puVar2[9];
        uVar8 = *piVar7 - *(int *)(**(int **)(uVar6 + 4) + 4);
        if (uVar8 < (uint)puVar4[5]) {
          uVar8 = puVar4[5];
        }
        puVar4[5] = uVar8;
        piVar7[10] = uVar6;
        uVar6 = puVar2[4];
        uVar8 = puVar2[2];
        *(int **)puVar2[10] = piVar7;
        FUN_ram_4ff2c2a4(uVar8,uVar6);
        thunk_FUN_ram_4ff209c6(puVar2);
        FUN_ram_4ff216e2(&DAT_ram_4ff6c438);
        return 0;
      }
    }
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,puVar1,"E (%lu) %s: %s(%d): munmap target pointer isn\'t mapped yet\n",uVar3,
                   PTR_DAT_ram_481d4b48_ram_4ff52f94,"esp_mmu_unmap",0x2b4);
LAB_ram_481a696c:
  FUN_ram_4ff216e2(&DAT_ram_4ff6c438);
  return 0x105;
}


