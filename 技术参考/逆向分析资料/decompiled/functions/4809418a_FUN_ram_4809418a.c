/* Firmware entry: 0x4809418a */

void FUN_ram_4809418a(int param_1,undefined4 *param_2,byte param_3,undefined4 param_4,
                     undefined4 param_5,undefined1 param_6,undefined4 param_7,int param_8,
                     undefined1 param_9)

{
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (*(char *)(param_1 + 0x18c6e) != '\0') {
    uStack_44 = *param_2;
    uStack_40 = param_2[1];
    uStack_3c = param_2[2];
    uStack_38 = param_2[3];
    uStack_34 = param_2[4];
    uStack_30 = param_2[5];
    uStack_2c = param_2[6];
    uStack_28 = param_2[7];
    uStack_18 = (uint)param_3 << 0x18;
    uStack_24 = param_2[8];
    uStack_1c = 0;
    uStack_14 = 0;
    uStack_18 = CONCAT31(uStack_18._1_3_,param_6);
    uStack_20 = param_5;
    if (param_8 == 0) {
      param_7 = FUN_ram_4ff21a0a();
    }
    uStack_18 = CONCAT22(CONCAT11(uStack_18._3_1_,param_9),CONCAT11(1,(undefined1)uStack_18));
    uStack_1c = param_7;
    FUN_ram_48094000(param_1,&uStack_44,param_4);
  }
  return;
}


