/* Firmware entry: 0x4ff30714 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4ff30714(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int aiStack_54 [2];
  int *piStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 != 0) {
    do {
      uVar1 = param_3;
      if (0x40 < param_3) {
        uVar1 = 0x40;
      }
      aiStack_54[0] = param_2;
      esp_rom_spi_set_op_mode(3,7);
      iStack_40 = uVar1 << 3;
      aiStack_54[1] = 0x108080;
      uStack_48 = 0x20;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0xc;
      piStack_4c = aiStack_54;
      iStack_44 = param_1;
      esp_rom_spi_cmd_config(3,aiStack_54 + 1);
      param_3 = param_3 - uVar1;
      esp_rom_spi_cmd_start(3,0,0,2,0);
      param_1 = param_1 + uVar1;
      param_2 = param_2 + uVar1;
    } while (param_3 != 0);
    return;
  }
  return;
}


