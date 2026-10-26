/* Firmware entry: 0x4812f8ba */

int thunk_FUN_ram_4812f3b2(int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_54 = 0;
  uStack_58 = 0xef;
  if (param_3 == (int *)0x0) {
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  iVar2 = *param_2;
  if ((iVar2 == 0x2000) || (iVar2 == DAT_ram_4ff47f0c)) {
LAB_ram_4812f410:
    bVar1 = false;
    piVar7 = (int *)0x0;
  }
  else {
    iVar3 = FUN_ram_48001a20();
    if ((iVar3 != 0) && (iVar3 = FUN_ram_480019d8(), iVar2 == iVar3)) {
      iVar2 = *param_2;
      goto LAB_ram_4812f410;
    }
    iVar2 = *param_2;
    bVar1 = true;
    piVar7 = &uStack_54;
  }
  memset(param_3,0,0x108);
  piVar8 = param_3 + 1;
  *param_3 = iVar2;
  iVar2 = FUN_ram_4812edc2(iVar2,piVar8,0x18,1);
  if (iVar2 != 0) goto LAB_ram_4812f47e;
  uVar4 = 0;
  if (*(char *)((int)param_3 + 0x1b) != '\0') {
    if (piVar7 == (int *)0x0) {
      iVar10 = *param_3;
      iVar3 = 0;
      if ((char)param_3[1] != -0x17) goto joined_r0x4812f4b6;
      goto LAB_ram_4812f50c;
    }
    iVar2 = FUN_ram_4812f8be();
    *piVar7 = iVar2;
    iVar3 = uStack_54;
    if (iVar2 == 0) {
      iVar2 = 0x101;
    }
    else {
      uVar4 = FUN_ram_4812f8f8(iVar2,piVar8,0x18);
      iVar10 = *param_3;
      if ((char)param_3[1] == -0x17) goto LAB_ram_4812f50c;
      iVar2 = 0x2002;
      if (param_1 != 1) goto LAB_ram_4812f4da;
    }
    goto LAB_ram_4812f472;
  }
  iVar10 = *param_3;
  if ((char)param_3[1] != -0x17) {
joined_r0x4812f4b6:
    iVar3 = 0;
    if (param_1 != 1) {
LAB_ram_4812f4da:
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_image",
                       "E (%lu) %s: image at 0x%lx has invalid magic byte (nothing flashed here?)\n"
                       ,uVar4,"esp_image",iVar10);
      iVar2 = 0x2002;
      goto LAB_ram_4812f472;
    }
LAB_ram_4812f4ba:
    iVar2 = 0x2002;
    goto LAB_ram_4812f47e;
  }
  iVar3 = 0;
LAB_ram_4812f50c:
  bVar5 = false;
  if ((iVar10 != 0x2000) && (DAT_ram_4ff47f0c != iVar10)) {
    iVar2 = FUN_ram_48001a20(uVar4,0);
    bVar5 = true;
    if (iVar2 != 0) {
      iVar2 = FUN_ram_480019d8(iVar2,1);
      bVar5 = iVar2 != iVar10;
    }
  }
  iVar2 = FUN_ram_4812ec12(piVar8,bVar5);
  if (iVar2 != 0) goto LAB_ram_4812f472;
  if (*(byte *)((int)param_3 + 5) < 0x11) {
    param_3[0x37] = 0x18;
    iVar2 = FUN_ram_4812efec(param_3,param_1 == 1,iVar3,&uStack_58);
    if (iVar2 != 0) goto LAB_ram_4812f472;
    iVar2 = FUN_ram_4ff45682();
    uVar6 = uStack_58;
    iVar10 = param_3[0x37];
    uStack_50 = 0;
    uStack_4c = 0;
    uVar9 = iVar10 + 0x10U & 0xfffffff0;
    uStack_48 = 0;
    uStack_44 = 0;
    iVar11 = uVar9 - iVar10;
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4812edc2(*param_3 + iVar10,&uStack_50,iVar11,1);
      if (iVar2 == 0) {
        uVar9 = (uint)*(byte *)((int)&uStack_54 + iVar11 + 3);
        uVar6 = (uVar6 >> 0x18 ^ uVar6 >> 0x10 ^ uVar6 ^ uVar6 >> 8) & 0xff;
        if (uVar9 != uVar6) {
          if (param_1 != 1) {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"esp_image",
                             "E (%lu) %s: Checksum failed. Calculated 0x%x read 0x%x\n",uVar4,
                             "esp_image",uVar6,uVar9);
          }
          goto LAB_ram_4812f714;
        }
        if (iVar3 != 0) goto LAB_ram_4812f60c;
        uVar9 = param_3[0x37] + iVar11;
        goto LAB_ram_4812f61a;
      }
      goto LAB_ram_4812f472;
    }
    if (iVar3 == 0) {
LAB_ram_4812f61a:
      param_3[0x37] = uVar9;
      uVar6 = param_2[1];
      if (*(char *)((int)param_3 + 0x1b) != '\0') {
        iVar2 = FUN_ram_4812edc2(*param_3 + uVar9,param_3 + 0x38,0x20,1);
        if (iVar2 != 0) goto LAB_ram_4812f472;
        uVar9 = param_3[0x37] + 0x20;
        param_3[0x37] = uVar9;
      }
      if (uVar9 <= uVar6) {
        if (!bVar1) {
          if (iVar3 == 0) {
            return 0;
          }
LAB_ram_4812f6e0:
          FUN_ram_4812f952(iVar3,0);
          return 0;
        }
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = FUN_ram_4ff45682();
        if (iVar2 != 0) goto LAB_ram_4812f6e0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        FUN_ram_4812f952(iVar3,&uStack_50);
        FUN_ram_4812ee12(&uStack_50,0x20,"Calculated hash");
        iVar2 = FUN_ram_4ff4511a(param_3 + 0x38,&uStack_50,0x20);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_image","E (%lu) %s: Image hash failed - image is corrupt\n",uVar4,
                         "esp_image");
        FUN_ram_4812ee12(param_3 + 0x38,0x20,"Expected hash");
        goto LAB_ram_4812f4ba;
      }
      if (param_1 != 1) {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_image",
                         "E (%lu) %s: Image length %lu doesn\'t fit in partition length %lu\n",uVar4
                         ,"esp_image",uVar9,uVar6);
      }
      goto LAB_ram_4812f714;
    }
    iVar2 = FUN_ram_4812edc2(*param_3 + iVar10,&uStack_50,iVar11,1);
    if (iVar2 == 0) {
LAB_ram_4812f60c:
      FUN_ram_4812f8f8(iVar3,&uStack_50,iVar11);
      uVar9 = param_3[0x37] + iVar11;
      goto LAB_ram_4812f61a;
    }
  }
  else {
    iVar2 = 0x2002;
    if (param_1 == 1) goto LAB_ram_4812f472;
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_image","E (%lu) %s: image at 0x%lx segment count %d exceeds max %d\n",
                     uVar4,"esp_image",iVar10,*(undefined1 *)((int)param_3 + 5),0x10);
LAB_ram_4812f714:
    iVar2 = 0x2002;
LAB_ram_4812f472:
    if (iVar3 == 0) goto LAB_ram_4812f47e;
  }
  FUN_ram_4812f952(iVar3,0);
LAB_ram_4812f47e:
  memset(param_3,0,0x108);
  return iVar2;
}


