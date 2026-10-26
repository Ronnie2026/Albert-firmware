/* Firmware entry: 0x48162ac4 */

void FUN_ram_48162ac4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined4 *)0x0) {
    iStack_1c = *(int *)(param_1 + 0x40);
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    iStack_20 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_24 = 0x1630;
    uStack_4c = 0x3a;
    if (iStack_1c == 0) {
      iStack_1c = 1000;
    }
    iVar1 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 4),&uStack_4c);
    if ((iVar1 == 0) && (iStack_20 == 0)) {
      *param_2 = uStack_44;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_cmd.c",0xe5,"sdmmc_send_cmd_read_ocr",&DAT_ram_481dc610);
}


