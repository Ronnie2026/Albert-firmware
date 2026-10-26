/* Firmware entry: 0x4804549a */

void FUN_ram_4804549a(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,
                     undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  char cStack_5a;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
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
  if ((param_2 - 1U & 0xff) < 2) {
    uStack_5c = (undefined1)param_6;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_5b = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 1;
    cStack_5a = (char)param_2;
    if (param_6 == 2) {
      cStack_5a = cStack_5a + '\x03';
      iVar3 = FUN_ram_480450a0(param_1,param_2,param_3,param_4,param_5,&uStack_38,0);
      uVar1 = uStack_40;
    }
    else {
      iVar3 = FUN_ram_480450a0(param_1,param_2,param_3,param_4,param_5,&uStack_38,0);
      uVar1 = uStack_40;
    }
    uStack_40 = uVar1;
    if (iVar3 != 0) {
      uVar2 = (ushort)uStack_3c >> 8;
      uStack_3c = CONCAT11((char)uVar2,(param_2 != 1) + '\x02');
      uStack_40._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
      uStack_40._0_3_ = CONCAT12(1,(short)((uint)uStack_14 >> 8));
      uStack_58 = uStack_30;
      uStack_54 = uStack_28;
      uStack_50 = uStack_24;
      uStack_48 = uStack_20;
      uStack_44 = uStack_18;
    }
    (**(code **)(*param_4 + 0xa8))(param_4,&uStack_5c);
  }
  return;
}


