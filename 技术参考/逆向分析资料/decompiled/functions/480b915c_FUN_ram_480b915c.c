/* Firmware entry: 0x480b915c */

void FUN_ram_480b915c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *__s;
  char *__s_00;
  undefined4 uVar9;
  int iVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = *(byte *)(param_2 + 0x86a9);
  if (bVar1 == 0) {
    bVar4 = *(byte *)(param_2 + 0x9396);
    bVar2 = *(byte *)(param_2 + 0x9397);
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x86aa);
    bVar4 = bVar1;
  }
  if (*(char *)(param_2 + 0x8787) == '\0') {
    __s = (char *)(param_2 + 0x92fc);
    if (*(char *)(param_2 + 0x92fc) != '\0') goto LAB_ram_480b91a8;
    iVar10 = param_2 + 0x92f0;
    iVar6 = FUN_ram_4ff453ae(iVar10,"failed");
    if ((iVar6 == 0) || (iVar6 = FUN_ram_4ff453ae(iVar10,"partial"), iVar6 == 0))
    goto LAB_ram_480b91a8;
    bVar3 = *(byte *)(param_2 + 0x86a8);
    if (bVar3 == 3) {
      __s_00 = "downloading_records";
LAB_ram_480b9490:
      if (((*(int *)__s_00 == 0x6c696166) && ((short)*(int *)((int)__s_00 + 4) == 0x6465)) &&
         (*(char *)((int)__s_00 + 6) == '\0')) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    else {
      if (3 < bVar3) {
        if (5 < bVar3) {
          if (bVar3 != 6) goto LAB_ram_480b9630;
          if ((*(byte *)(param_2 + 0x86aa) == bVar1) && (bVar1 != 0)) {
            __s_00 = "confirming";
          }
          else {
            __s_00 = "failed";
          }
          goto LAB_ram_480b947e;
        }
        __s_00 = "applying";
        goto LAB_ram_480b9490;
      }
      if (bVar3 == 1) {
        __s_00 = "checking";
        goto LAB_ram_480b9490;
      }
      if (bVar3 == 2) {
        if ((bVar1 & 1) == 0) {
          __s_00 = "downloading_records";
        }
        else {
          __s_00 = "downloading_settings";
        }
LAB_ram_480b947e:
        iVar6 = FUN_ram_4ff453ae(__s_00,"completed");
        uVar9 = 0;
        if (iVar6 != 0) goto LAB_ram_480b9490;
      }
      else {
LAB_ram_480b9630:
        iVar6 = FUN_ram_4ff453ae(iVar10,"applied");
        if (iVar6 == 0) {
          __s_00 = "completed";
          goto LAB_ram_480b947e;
        }
        __s_00 = &DAT_ram_481c3e20;
        uVar9 = 0;
      }
    }
  }
  else {
    __s = (char *)(param_2 + 0x8787);
LAB_ram_480b91a8:
    uVar9 = 0;
    __s_00 = "failed";
  }
  sVar5 = strlen((char *)(param_2 + 0x933d));
  FUN_ram_4808c96e(param_1,"restore_id",(char *)(param_2 + 0x933d),sVar5);
  if ((((char)param_1[10] == '\0') || (10 < param_1[3] - 1U)) ||
     ((*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0' ||
      (iVar6 = FUN_ram_4808c696(param_1,"restore_progress"), iVar6 == 0)))) {
LAB_ram_480b91ec:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    local_50 = CONCAT31(local_50._1_3_,0x7b);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,1);
    if (iVar6 == 0) goto LAB_ram_480b91ec;
    iVar6 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 1;
    param_1[3] = iVar6 + 1;
  }
  sVar5 = strlen(__s_00);
  FUN_ram_4808c96e(param_1,"phase",__s_00,sVar5);
  FUN_ram_4808c2dc(param_1,"active",uVar9);
  iVar6 = FUN_ram_4808c696(param_1,"received_bytes");
  if (iVar6 != 0) {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uVar7 = FUN_ram_4819ad74(&local_50,0x20,&DAT_ram_481c48f4);
    if ((char)param_1[10] != '\0') {
      uVar8 = param_1[2];
      if ((uVar8 <= (uint)param_1[1]) && (uVar7 < param_1[1] - uVar8)) {
        FUN_ram_4ff45158(*param_1 + uVar8,&local_50,uVar7);
        iVar6 = param_1[2];
        param_1[2] = uVar7 + iVar6;
        *(undefined1 *)(*param_1 + uVar7 + iVar6) = 0;
        goto LAB_ram_480b922e;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
LAB_ram_480b922e:
  FUN_ram_480b2068(param_1,"total_bytes",param_4);
  if (((((char)param_1[10] == '\0') || (10 < param_1[3] - 1U)) ||
      (*(char *)((int)param_1 + param_1[3] + 0x1b) == '\0')) ||
     (iVar6 = FUN_ram_4808c696(param_1,"selected_scopes"), iVar6 == 0)) {
LAB_ram_480b9258:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    local_50 = CONCAT31(local_50._1_3_,0x5b);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,1);
    if (iVar6 == 0) goto LAB_ram_480b9258;
    iVar6 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 0;
    *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
    param_1[3] = iVar6 + 1;
  }
  if ((bVar4 & 1) != 0) {
    FUN_ram_4808c458(param_1,"settings");
  }
  if ((bVar4 & 2) != 0) {
    FUN_ram_4808c458(param_1,"records");
  }
  if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
LAB_ram_480b9302:
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    uVar7 = param_1[2];
    if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 2)) goto LAB_ram_480b9302;
    *(undefined1 *)(*param_1 + uVar7) = 0x5d;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    iVar6 = param_1[3];
    param_1[3] = iVar6 + -1;
    if (((char)param_1[10] == '\0') ||
       (((10 < iVar6 - 2U || (*(char *)((int)param_1 + iVar6 + 0x1a) == '\0')) ||
        (iVar6 = FUN_ram_4808c696(param_1,"completed_scopes"), iVar6 == 0)))) goto LAB_ram_480b9302;
    local_50 = CONCAT31(local_50._1_3_,0x5b);
    iVar6 = FUN_ram_4808c90a(param_1,&local_50,1);
    if (iVar6 == 0) goto LAB_ram_480b9302;
    iVar6 = param_1[3];
    *(undefined1 *)((int)param_1 + iVar6 + 0x1c) = 0;
    *(undefined1 *)((int)param_1 + iVar6 + 0x10) = 1;
    param_1[3] = iVar6 + 1;
  }
  if ((bVar2 & 1) != 0) {
    FUN_ram_4808c458(param_1,"settings");
  }
  if ((bVar2 & 2) != 0) {
    FUN_ram_4808c458(param_1,"records");
  }
  if ((((char)param_1[10] == '\0') || ((uint)param_1[3] < 2)) ||
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
LAB_ram_480b936c:
    *(undefined1 *)(param_1 + 10) = 0;
    iVar6 = FUN_ram_4ff453ae(__s_00,"failed");
    if (iVar6 != 0) goto LAB_ram_480b93e2;
LAB_ram_480b9380:
    sVar5 = strlen(__s);
    FUN_ram_4808c96e(param_1,"error",__s,sVar5);
  }
  else {
    uVar7 = param_1[2];
    if (((uint)param_1[1] < uVar7) || (param_1[1] - uVar7 < 2)) goto LAB_ram_480b936c;
    *(undefined1 *)(*param_1 + uVar7) = 0x5d;
    iVar6 = param_1[2];
    param_1[2] = iVar6 + 1;
    *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
    param_1[3] = param_1[3] + -1;
    iVar6 = FUN_ram_4ff453ae(__s_00,"failed");
    if (iVar6 == 0) goto LAB_ram_480b9380;
  }
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar7 = param_1[2];
    if ((uVar7 <= (uint)param_1[1]) && (1 < param_1[1] - uVar7)) {
      *(undefined1 *)(*param_1 + uVar7) = 0x7d;
      iVar6 = param_1[2];
      param_1[2] = iVar6 + 1;
      *(undefined1 *)(iVar6 + 1 + *param_1) = 0;
      param_1[3] = param_1[3] + -1;
      return;
    }
  }
LAB_ram_480b93e2:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


