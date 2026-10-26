/* Firmware entry: 0x480d5398 */

void FUN_ram_480d5398(uint *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     (iVar5 = FUN_ram_4808c696(param_1,param_3), iVar5 == 0)) {
LAB_ram_480d53c6:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    local_40 = CONCAT31(local_40._1_3_,0x7b);
    iVar5 = FUN_ram_4808c90a(param_1,&local_40,1);
    if (iVar5 == 0) goto LAB_ram_480d53c6;
    uVar3 = param_1[3];
    *(undefined1 *)((int)param_1 + uVar3 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + uVar3 + 0x1c) = 1;
    param_1[3] = uVar3 + 1;
  }
  FUN_ram_4808c2dc(param_1,"customSpeedEnabled",*param_2);
  FUN_ram_4808c2dc(param_1,"modeExplicit",param_2[1]);
  if ((((char)param_1[10] == '\0') || (10 < param_1[3] - 1)) ||
     ((*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0' ||
      (iVar5 = FUN_ram_4808c696(param_1,"targets"), iVar5 == 0)))) {
LAB_ram_480d5408:
    *(undefined1 *)(param_1 + 10) = 0;
    cVar4 = '\0';
  }
  else {
    local_40 = CONCAT31(local_40._1_3_,0x5b);
    iVar5 = FUN_ram_4808c90a(param_1,&local_40,1);
    if (iVar5 == 0) goto LAB_ram_480d5408;
    uVar3 = param_1[3];
    cVar4 = (char)param_1[10];
    *(undefined1 *)((int)param_1 + uVar3 + 0x1c) = 0;
    *(undefined1 *)((int)param_1 + uVar3 + 0x10) = 1;
    param_1[3] = uVar3 + 1;
  }
  puVar2 = (undefined2 *)(param_2 + 2);
  do {
    uVar1 = *puVar2;
    if (((cVar4 == '\0') || (param_1[3] == 0)) ||
       (iVar5 = (param_1[3] - 1) + (int)param_1, *(char *)(iVar5 + 0x1c) != '\0'))
    goto LAB_ram_480d54ca;
    uVar3 = (uint)*(byte *)(iVar5 + 0x10);
    if (uVar3 == 0) {
      uVar3 = param_1[2];
      if ((param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_480d54ca;
      *(undefined1 *)(*param_1 + uVar3) = 0x2c;
      uVar6 = param_1[2];
      uVar3 = *param_1;
      param_1[2] = uVar6 + 1;
      *(undefined1 *)(uVar6 + 1 + uVar3) = 0;
      iVar5 = (param_1[3] - 1) + (int)param_1;
    }
    *(undefined1 *)(iVar5 + 0x10) = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uVar3 = FUN_ram_4819ad74(&local_40,0x20,&DAT_ram_481c48f4,uVar3,uVar1,0);
    if ((char)param_1[10] == '\0') goto LAB_ram_480d54ca;
    uVar6 = param_1[2];
    if ((param_1[1] < uVar6) || (param_1[1] - uVar6 <= uVar3)) goto LAB_ram_480d54ca;
    FUN_ram_4ff45158(*param_1 + uVar6,&local_40,uVar3);
    uVar6 = param_1[2];
    puVar2 = puVar2 + 1;
    param_1[2] = uVar3 + uVar6;
    *(undefined1 *)(*param_1 + uVar3 + uVar6) = 0;
    cVar4 = (char)param_1[10];
  } while ((undefined2 *)(param_2 + 0x3e) != puVar2);
  if (((cVar4 != '\0') && (1 < param_1[3])) && (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')
     ) {
    uVar3 = param_1[2];
    if ((uVar3 <= param_1[1]) && (1 < param_1[1] - uVar3)) {
      *(undefined1 *)(*param_1 + uVar3) = 0x5d;
      uVar3 = param_1[2];
      param_1[2] = uVar3 + 1;
      *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
      uVar6 = param_1[3];
      uVar3 = uVar6 - 1;
      param_1[3] = uVar3;
      if (((char)param_1[10] != '\0') &&
         ((1 < uVar3 && (*(char *)((int)param_1 + uVar6 + 0x1a) != '\0')))) {
        uVar3 = param_1[2];
        if ((uVar3 <= param_1[1]) && (1 < param_1[1] - uVar3)) {
          *(undefined1 *)(*param_1 + uVar3) = 0x7d;
          uVar3 = param_1[2];
          param_1[2] = uVar3 + 1;
          *(undefined1 *)(uVar3 + 1 + *param_1) = 0;
          param_1[3] = param_1[3] - 1;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
      }
    }
  }
LAB_ram_480d54d4:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
LAB_ram_480d54ca:
  do {
    *(undefined1 *)(param_1 + 10) = 0;
    puVar2 = puVar2 + 1;
  } while ((undefined2 *)(param_2 + 0x3e) != puVar2);
  goto LAB_ram_480d54d4;
}


