/* Firmware entry: 0x48003628 */

void FUN_ram_48003628(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < DAT_ram_4ff47dac) {
    uVar3 = FUN_ram_4ff44d14();
    if (param_1 == 0) {
      pcVar1 = "RPC_FEATURE_COMMAND__Feature_Command_BT_Disable";
    }
    else {
      pcVar1 = "RPC_FEATURE_COMMAND__Feature_Command_BT_Enable";
    }
    ets_printf("I (%lu) %s: %s automatic switching of GPIO sleep configuration\n",uVar3,"sleep_gpio"
               ,pcVar1 + 0x28);
  }
  uVar2 = 0;
LAB_ram_48003674:
  do {
    uVar4 = 0xffffffffU >> (uVar2 & 0x1f) | 0xfffffe << (0x1f - uVar2 & 0x1f);
    if (-1 < (int)(uVar2 - 0x20)) {
      uVar4 = 0x7fffff >> (uVar2 - 0x20 & 0x1f);
    }
    if ((uVar4 & 1) != 0) {
      if (uVar2 - 0x25 < 2) {
        FUN_ram_4812bfa6(uVar2);
        uVar2 = uVar2 + 1;
        goto LAB_ram_48003674;
      }
      if (param_1 == 0) {
        FUN_ram_4812bfa6();
      }
      else {
        FUN_ram_4812bee8();
      }
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 0x37) {
      return;
    }
  } while( true );
}


