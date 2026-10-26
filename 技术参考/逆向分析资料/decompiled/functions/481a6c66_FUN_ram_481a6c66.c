/* Firmware entry: 0x481a6c66 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_481a6c66(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int aiStack_2c [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_2c[2] = 0;
  aiStack_2c[1] = 0x1400;
  aiStack_2c[3] = 0x100006;
  iVar1 = FUN_ram_480025d4(aiStack_2c + 1,DAT_ram_4ff59fd0,DAT_ram_4ff59fd4);
  if (iVar1 == 0) {
    if (DAT_ram_4ff59fe4 != 0) {
      if (DAT_ram_4ff59fdc == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s___IDF_components_esp_psram_syste_ram_4ff55348 + 0x28,0x20d,
                         "esp_psram_extram_add_to_heap_allocator",
                         "s_psram_ctx.regions_to_heap[PSRAM_MEM_32BIT_ALIGNED].vaddr_start");
      }
      aiStack_2c[4] = 0x1400;
      aiStack_2c[5] = 0;
      aiStack_2c[6] = 2;
      iVar2 = FUN_ram_480025d4(aiStack_2c + 4,DAT_ram_4ff59fdc,DAT_ram_4ff59fe0);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    if (2 < DAT_ram_4ff47dac) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("I (%lu) %s: Adding pool of %dK of PSRAM memory to heap allocator\n",uVar3,
                 s_esp_psram_ram_4ff4c5a8,(uint)(DAT_ram_4ff59fd8 + DAT_ram_4ff59fe4) >> 10);
    }
    FUN_ram_4ff350b0(aiStack_2c,aiStack_2c + 4);
    iVar2 = FUN_ram_480025d4(aiStack_2c + 1,aiStack_2c[0],aiStack_2c[4]);
    if ((iVar2 == 0) && (2 < DAT_ram_4ff47dac)) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("I (%lu) %s: Adding pool of %dK of PSRAM memory gap generated due to end address alignment of irom to the heap allocator\n"
                 ,uVar3,s_esp_psram_ram_4ff4c5a8,(uint)(aiStack_2c[4] - aiStack_2c[0]) >> 10);
    }
    FUN_ram_4ff3522a(aiStack_2c,aiStack_2c + 4);
    iVar2 = FUN_ram_480025d4(aiStack_2c + 1,aiStack_2c[0],aiStack_2c[4]);
    if ((iVar2 == 0) && (2 < DAT_ram_4ff47dac)) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf("I (%lu) %s: Adding pool of %dK of PSRAM memory gap generated due to end address alignment of drom to the heap allocator\n"
                 ,uVar3,s_esp_psram_ram_4ff4c5a8,(uint)(aiStack_2c[4] - aiStack_2c[0]) >> 10);
    }
  }
  return iVar1;
}


