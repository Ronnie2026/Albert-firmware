/* Firmware entry: 0x48046098 */

undefined4
FUN_ram_48046098(undefined4 *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6,
                undefined4 param_7,undefined4 param_8,undefined1 *param_9,int param_10,byte param_11
                ,char param_12,undefined4 param_13)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uStack_88;
  int iStack_84;
  byte abStack_80 [32];
  undefined4 uStack_60;
  undefined1 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_2;
  if (iVar1 == 0x3fd) goto LAB_ram_480461ca;
  if ((param_5 == 0xe) && (param_12 == '\x01')) {
    if (param_6 == 1) goto LAB_ram_480461ca;
    if (((uint)param_2[6] >> 8 & 1) == 0) goto LAB_ram_480460e6;
  }
  else {
    if (param_6 == 1) goto LAB_ram_480461ca;
LAB_ram_480460e6:
    if (*(char *)((int)param_2 + 0xd) == '\x02') {
      if (iVar1 == 0x3c2) {
        if ((((char)param_2[1] != '\0') && ((*(byte *)((int)param_2 + 5) & 3) == 1)) &&
           (param_6 != 4)) goto LAB_ram_480461ca;
      }
      else if ((iVar1 == 0x679) && (param_6 != 7)) {
LAB_ram_480461ca:
        if (param_9 != (undefined1 *)0x0) {
          *param_9 = 0xc;
        }
        return 0;
      }
    }
    else if (*(char *)((int)param_2 + 0xd) == '\x04') {
      if (iVar1 == 0x370) {
        if (param_6 != 5) goto LAB_ram_480461ca;
      }
      else if ((iVar1 == 0x30a) && (param_6 != 6)) goto LAB_ram_480461ca;
    }
  }
  FUN_ram_4ff3ec14(param_1 + 0x297,0xffffffff);
  piVar5 = (int *)*param_1;
  FUN_ram_4ff3ee10(param_1 + 0x297);
  memset(abStack_80,0,0x40);
  abStack_80[0] = param_11 | param_10 != 0;
  iStack_84 = param_10;
  uStack_48 = 0xff;
  uStack_88 = param_7;
  if ((piVar5 != (int *)0x0) &&
     (((param_6 == 4 && (param_5 == 8)) && (uVar4 = (uint)param_2[6] >> 9 & 1, uVar4 != 0)))) {
    if (1 < (param_4 - 3 & 0xff)) {
      uVar2 = FUN_ram_4ff3c3f4(0);
      goto LAB_ram_48046168;
    }
    iVar1 = (**(code **)(*piVar5 + 0x54))(piVar5);
    param_4 = iVar1 + 3U & 0xff;
    uStack_60 = (**(code **)(*piVar5 + 0x58))(piVar5);
    param_3 = uVar4;
  }
  uVar2 = FUN_ram_4ff3c3f4(0);
  if (param_4 == 4) {
    FUN_ram_4ff3c43c(0,0x18);
  }
LAB_ram_48046168:
  uVar3 = FUN_ram_480459fe(param_1,param_2,param_3,param_5,param_4,param_8,param_9,param_7,param_10,
                           param_11,&uStack_88,param_13);
  FUN_ram_4ff3c43c(0,uVar2);
  return uVar3;
}


