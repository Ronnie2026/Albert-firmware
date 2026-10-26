/* Firmware entry: 0x480b41ec */

char FUN_ram_480b41ec(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,char *param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((char)param_1[10] == '\0') || (param_1[3] != 0)) {
LAB_ram_480b421c:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar4 = param_1[2];
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 2)) goto LAB_ram_480b421c;
    *(undefined1 *)(*param_1 + uVar4) = 0x7b;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[3] = 1;
  }
  FUN_ram_4808c2dc(param_1,&DAT_ram_481c4274,1);
  FUN_ram_480b407c(param_1,"schema",1);
  FUN_ram_480b2068(param_1,"revision",*param_2);
  cVar5 = *(char *)(param_2 + 0x14a);
  if (cVar5 == '\x02') {
    pcVar1 = "stale";
    uVar2 = 5;
  }
  else if (cVar5 == '\x03') {
    pcVar1 = "invalid";
    uVar2 = 7;
  }
  else if (cVar5 == '\x01') {
    pcVar1 = "ready";
    uVar2 = 5;
  }
  else {
    pcVar1 = "waiting";
    uVar2 = 7;
  }
  FUN_ram_4808c96e(param_1,"sourceState",pcVar1,uVar2);
  FUN_ram_480b2068(param_1,"tripEndDelayMs",0);
  FUN_ram_480b2068(param_1,"dropped",param_2[0x14b]);
  if (*(char *)((int)param_2 + 0x529) < '\0') {
    iVar6 = FUN_ram_4808c696(param_1,"fsdActive");
    if ((iVar6 != 0) && (iVar6 = FUN_ram_4808c90a(param_1,&DAT_ram_481c6654,4), iVar6 != 0))
    goto LAB_ram_480b42ba;
LAB_ram_480b42d4:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    FUN_ram_4808c2dc(param_1,"fsdActive",*(char *)((int)param_2 + 0x529) != '\0');
LAB_ram_480b42ba:
    if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1U)) ||
        (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
       ((iVar6 = FUN_ram_4808c696(param_1,"storage"), iVar6 == 0 || ((char)param_1[10] == '\0'))))
    goto LAB_ram_480b42d4;
    uVar4 = param_1[2];
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 2)) goto LAB_ram_480b42d4;
    *(undefined1 *)(*param_1 + uVar4) = 0x7b;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    iVar6 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 1;
    param_1[3] = iVar6 + 1;
  }
  FUN_ram_4808c2dc(param_1,"available",param_3);
  FUN_ram_4808c2dc(param_1,"persisted",param_4);
  FUN_ram_4808c2dc(param_1,"dirty",param_5);
  sVar3 = 0;
  if (param_6 != (char *)0x0) {
    sVar3 = strlen(param_6);
  }
  FUN_ram_4808c96e(param_1,"error",param_6,sVar3);
  if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0')) {
LAB_ram_480b441c:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar4 = param_1[2];
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 2)) goto LAB_ram_480b441c;
    *(undefined1 *)(*param_1 + uVar4) = 0x7d;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    iVar6 = param_1[3];
    param_1[3] = iVar6 + -1;
    if ((((char)param_1[10] == '\0') ||
        (((10 < iVar6 - 2U || (*(char *)((int)param_1 + iVar6 + 0x1a) == '\0')) ||
         (iVar6 = FUN_ram_4808c696(param_1,"cumulative"), iVar6 == 0)))) ||
       ((char)param_1[10] == '\0')) goto LAB_ram_480b441c;
    uVar4 = param_1[2];
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 2)) goto LAB_ram_480b441c;
    *(undefined1 *)(*param_1 + uVar4) = 0x7b;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    iVar6 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 1;
    param_1[3] = iVar6 + 1;
  }
  iVar6 = FUN_ram_4808c696(param_1,"totalMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"classifiedMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"fsdMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"longestFsdMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  FUN_ram_480b2068(param_1,"startedUnix",param_2[2]);
  if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0')) {
LAB_ram_480b45ae:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar4 = param_1[2];
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 2)) goto LAB_ram_480b45ae;
    *(undefined1 *)(*param_1 + uVar4) = 0x7d;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    param_1[3] = param_1[3] + -1;
  }
  FUN_ram_4808c7bc(param_1,"subtotal");
  iVar6 = FUN_ram_4808c696(param_1,"totalMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"classifiedMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"fsdMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  iVar6 = FUN_ram_4808c696(param_1,"longestFsdMeters");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar2 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,uVar2);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  FUN_ram_480b2068(param_1,"startedUnix",param_2[10]);
  if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) == '\0')) {
LAB_ram_480b48ba:
    *(undefined1 *)(param_1 + 10) = 0;
    if (*(char *)(param_2 + 0x12) == '\0') goto LAB_ram_480b478a;
LAB_ram_480b48d0:
    FUN_ram_4808c7bc(param_1,"current");
    FUN_ram_480b320a(param_1,param_2 + 0x14);
    FUN_ram_4808c244(param_1);
LAB_ram_480b48e4:
    if (((char)param_1[10] != '\0') &&
       ((((param_1[3] - 1U < 0xb && (*(char *)((int)param_1 + param_1[3] + 0x1b) != '\0')) &&
         (iVar6 = FUN_ram_4808c696(param_1,"history"), iVar6 != 0)) && ((char)param_1[10] != '\0')))
       ) {
      uVar4 = param_1[2];
      if ((uVar4 <= (uint)param_1[1]) && (1 < param_1[1] - uVar4)) {
        *(undefined1 *)(*param_1 + uVar4) = 0x5b;
        iVar6 = param_1[2];
        param_1[2] = iVar6 + 1;
        *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
        iVar6 = param_1[3];
        cVar5 = (char)param_1[10];
        *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
        *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 0;
        uVar4 = iVar6 + 1;
        param_1[3] = uVar4;
        if (*(char *)(param_2 + 0x22) != '\0') goto LAB_ram_480b47a0;
LAB_ram_480b483e:
        if (((cVar5 != '\0') && (1 < uVar4)) && (*(char *)((int)param_1 + uVar4 + 0x1b) == '\0')) {
          uVar4 = param_1[2];
          if ((uVar4 <= (uint)param_1[1]) && (1 < param_1[1] - uVar4)) {
            *(undefined1 *)(*param_1 + uVar4) = 0x5d;
            iVar6 = param_1[2];
            param_1[2] = iVar6 + 1;
            *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
            iVar6 = param_1[3];
            param_1[3] = iVar6 + -1;
            if (((char)param_1[10] != '\0') &&
               ((iVar6 + -1 == 1 && (iVar6 = param_1[7], (char)iVar6 != '\0')))) {
              uVar4 = param_1[2];
              if ((uVar4 <= (uint)param_1[1]) && (1 < param_1[1] - uVar4)) {
                *(undefined1 *)(*param_1 + uVar4) = 0x7d;
                iVar7 = param_1[2];
                param_1[2] = iVar7 + 1;
                *(undefined1 *)(iVar7 + 1 + *param_1) = 0;
                param_1[3] = 0;
                return (char)iVar6;
              }
            }
          }
        }
        goto LAB_ram_480b489a;
      }
    }
  }
  else {
    uVar4 = param_1[2];
    if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 2)) goto LAB_ram_480b48ba;
    *(undefined1 *)(*param_1 + uVar4) = 0x7d;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    param_1[3] = param_1[3] + -1;
    if (*(char *)(param_2 + 0x12) != '\0') goto LAB_ram_480b48d0;
LAB_ram_480b478a:
    iVar6 = FUN_ram_4808c696();
    if ((iVar6 != 0) && (iVar6 = FUN_ram_4808c90a(param_1,&DAT_ram_481c6654,4), iVar6 != 0))
    goto LAB_ram_480b48e4;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 0x22) != '\0') {
    cVar5 = '\0';
LAB_ram_480b47a0:
    puVar9 = param_2 + 0x24;
    uVar8 = 0;
LAB_ram_480b47b0:
    if (((cVar5 == '\0') || (iVar6 = param_1[3], 10 < iVar6 - 1U)) ||
       (*(char *)((int)param_1 + iVar6 + 0x1b) != '\0')) goto LAB_ram_480b47da;
    if (*(char *)((int)param_1 + iVar6 + 0xf) == '\0') {
      uVar4 = param_1[2];
      if (((uint)param_1[1] < uVar4) || (param_1[1] - uVar4 < 2)) goto LAB_ram_480b47da;
      *(undefined1 *)(*param_1 + uVar4) = 0x2c;
      iVar6 = param_1[2];
      param_1[2] = iVar6 + 1;
      *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
      if ((char)param_1[10] == '\0') goto LAB_ram_480b47da;
    }
    uVar4 = param_1[2];
    if ((uVar4 <= (uint)param_1[1]) && (1 < param_1[1] - uVar4)) {
      *(undefined1 *)(*param_1 + uVar4) = 0x7b;
      iVar6 = param_1[2];
      param_1[2] = iVar6 + 1;
      *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
      iVar6 = param_1[3];
      *(undefined1 *)((int)param_1 + iVar6 + 0xf) = 0;
      *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
      *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 1;
      param_1[3] = iVar6 + 1;
      FUN_ram_480b320a(param_1,puVar9);
      cVar5 = (char)param_1[10];
      goto joined_r0x480b49d2;
    }
LAB_ram_480b47da:
    do {
      *(undefined1 *)(param_1 + 10) = 0;
      FUN_ram_480b320a(param_1,puVar9);
      cVar5 = (char)param_1[10];
joined_r0x480b49d2:
      if (((cVar5 != '\0') && (1 < (uint)param_1[3])) &&
         (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
        uVar4 = param_1[2];
        if ((uVar4 <= (uint)param_1[1]) && (1 < param_1[1] - uVar4)) goto code_r0x480b480c;
      }
      *(undefined1 *)(param_1 + 10) = 0;
      uVar8 = uVar8 + 1;
      if ((*(byte *)(param_2 + 0x22) <= uVar8) || (puVar9 = puVar9 + 0xe, uVar8 == 0x14)) break;
    } while( true );
  }
LAB_ram_480b489a:
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
code_r0x480b480c:
  uVar8 = uVar8 + 1;
  *(undefined1 *)(*param_1 + uVar4) = 0x7d;
  iVar6 = param_1[2];
  param_1[2] = iVar6 + 1;
  *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
  cVar5 = (char)param_1[10];
  uVar4 = param_1[3] - 1;
  param_1[3] = uVar4;
  if ((*(byte *)(param_2 + 0x22) <= uVar8) || (puVar9 = puVar9 + 0xe, uVar8 == 0x14))
  goto LAB_ram_480b483e;
  goto LAB_ram_480b47b0;
}


