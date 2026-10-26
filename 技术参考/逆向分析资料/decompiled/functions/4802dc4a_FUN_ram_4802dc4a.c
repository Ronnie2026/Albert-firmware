/* Firmware entry: 0x4802dc4a */

byte FUN_ram_4802dc4a(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
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
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_4c = *param_1;
  uStack_48 = param_1[1];
  uStack_44 = param_1[2];
  uStack_40 = param_1[3];
  uStack_38 = param_1[5];
  uStack_3c = param_1[4];
  uStack_34 = param_1[6];
  uStack_30 = param_1[7];
  uStack_2c = param_1[8];
  bVar2 = *(byte *)(param_1 + 0xc);
  if (bVar2 == 0) {
    if (*(char *)((int)param_1 + 0x2e) == '\0') {
      uStack_28 = param_1[10];
      bVar2 = 1;
      uStack_24._0_3_ = CONCAT12(*(undefined1 *)((int)param_1 + 0x2d),1);
      uStack_24 = (uint)(uint3)uStack_24;
    }
    else {
      uStack_28 = param_1[9];
      uStack_24._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0xb),1);
      uStack_24 = CONCAT13(1,(uint3)uStack_24);
      bVar2 = FUN_ram_4802db7a(&uStack_4c);
      uStack_28 = param_1[10];
      uStack_24._0_3_ = CONCAT12(*(undefined1 *)((int)param_1 + 0x2d),(undefined2)uStack_24);
      uStack_24 = (uint)(uint3)uStack_24;
      if (*(char *)(param_1 + 0xc) != '\0') goto LAB_ram_4802dca6;
    }
    cVar3 = '\x03' - *(char *)((int)param_1 + 0x2f);
    cVar4 = '\0';
  }
  else {
    uStack_28 = param_1[10];
    uStack_24._0_3_ = CONCAT12(*(undefined1 *)((int)param_1 + 0x2d),1);
    uStack_24 = (uint)(uint3)uStack_24;
LAB_ram_4802dca6:
    cVar4 = *(char *)((int)param_1 + 0x31);
    cVar3 = '\x04';
    if (cVar4 == '\0') {
      cVar3 = '\x06' - *(char *)((int)param_1 + 0x32);
    }
  }
  uStack_24._0_2_ = CONCAT11(cVar4,(undefined1)uStack_24);
  uStack_24 = CONCAT13(cVar3,(uint3)uStack_24);
  bVar1 = FUN_ram_4802db7a(&uStack_4c);
  return bVar1 & bVar2;
}


