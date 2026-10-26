/* Firmware entry: 0x480b8c0a */

undefined4 FUN_ram_480b8c0a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  char *pcVar10;
  
  iVar1 = DAT_ram_4ff6dc9c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3b5f0(DAT_ram_4ff6dcc4,0xffffffff);
  if (((DAT_ram_4ff6dcc0 != 0) || (*(char *)(DAT_ram_4ff6dcc8 + 0x63fd) != '\0')) ||
     (*(char *)(DAT_ram_4ff6dcc8 + 0x63fe) != '\0')) {
LAB_ram_480b8dbc:
    FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
    return 0;
  }
  fence();
  pcVar10 = (char *)(iVar1 + 0x87b5d);
  fence();
  if (*pcVar10 != '\0') goto LAB_ram_480b8dbc;
  iVar4 = FUN_ram_4ff453ae(*(undefined4 *)(iVar1 + 0x87bc0),"resource_wait");
  if ((iVar4 == 0) && (iVar4 = FUN_ram_48025ba6(), iVar4 - *(int *)(iVar1 + 0x87b50) < 0)) {
    FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
    return 0;
  }
  fence();
  *(undefined4 *)(iVar1 + 0x504) = DAT_ram_4ff47e58;
  *(undefined4 *)(iVar1 + 0x508) = 0;
  iVar4 = DAT_ram_4ff6dcc8;
  uVar9 = (undefined1)param_1;
  if (param_1 != 5) {
    if (param_2 == 0) {
      param_2 = DAT_ram_4ff6dcc8;
    }
    iVar3 = iVar1 + 0x278;
    FUN_ram_4ff45158(iVar3,param_2,0x28b);
    iVar2 = DAT_ram_4ff6dc9c;
    pvVar5 = memset((void *)(DAT_ram_4ff6dc9c + 0x5c),0,0x57);
    iVar4 = FUN_ram_48034932(iVar1 + 0x3f9,iVar4 + 0x63cf,0,pvVar5);
    *(char *)(iVar2 + 0x87b60) = (char)iVar4;
    if (iVar4 == 0) {
      FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
      pcVar10 = "credential_unavailable";
      goto LAB_ram_480b8d96;
    }
    if (param_1 != 7) {
      if (param_1 == 1) {
        iVar4 = FUN_ram_480b878c(iVar3,"backup","settings",DAT_ram_4ff6dcc8 + 0x63cf,
                                 &DAT_ram_481df390,&DAT_ram_481df390,&DAT_ram_481df390,iVar1 + 0xc5a
                                );
        if (iVar4 != 0) {
          *(undefined4 *)(iVar1 + 0x518) = 0x800;
          *(undefined1 *)(iVar1 + 0x87b5c) = 1;
          fence();
          *pcVar10 = '\x01';
          fence();
          *(undefined1 *)(iVar1 + 0x87b5e) = 0;
          fence();
          *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fd) = 1;
          goto LAB_ram_480b8e3c;
        }
      }
      else if ((param_1 - 2U & 0xff) < 3) {
        if (param_1 == 3) {
          iVar4 = FUN_ram_480b878c(iVar3,"download","settings",DAT_ram_4ff6dcc8 + 0x63cf,
                                   DAT_ram_4ff6dc94 + 0x11a5c,&DAT_ram_481df390,&DAT_ram_481df390,
                                   iVar1 + 0xc5a);
          uVar7 = 0x30800;
        }
        else {
          if (param_1 != 4) {
            if (*(char *)(DAT_ram_4ff6dc94 + 0x11a41) == '\x01') {
              pcVar8 = "settings";
            }
            else if (*(char *)(DAT_ram_4ff6dc94 + 0x11a41) == '\x02') {
              pcVar8 = "records";
            }
            else {
              pcVar8 = "settings,records";
            }
            iVar4 = FUN_ram_480b878c(iVar3,"download","manifest",DAT_ram_4ff6dcc8 + 0x63cf,
                                     &DAT_ram_481df390,DAT_ram_4ff6dc94 + 0x11a44,pcVar8,
                                     iVar1 + 0xc5a);
            if (iVar4 != 0) {
              *(undefined4 *)(iVar1 + 0x518) = 0x2000;
              *(undefined1 *)(iVar1 + 0x87b5c) = 2;
              fence();
              *pcVar10 = '\x01';
              fence();
              *(undefined1 *)(iVar1 + 0x87b5e) = 0;
              fence();
              *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fd) = 1;
              goto LAB_ram_480b8e3c;
            }
            goto LAB_ram_480b8d76;
          }
          iVar4 = FUN_ram_480b878c(iVar3,"download","records",DAT_ram_4ff6dcc8 + 0x63cf,
                                   DAT_ram_4ff6dc94 + 0x11a5c,&DAT_ram_481df390,&DAT_ram_481df390,
                                   iVar1 + 0xc5a);
          uVar7 = 0x2000;
        }
        if (iVar4 != 0) {
          *(undefined4 *)(iVar1 + 0x518) = uVar7;
          *(undefined1 *)(iVar1 + 0x87b5c) = uVar9;
          fence();
          *pcVar10 = '\x01';
          fence();
          *(undefined1 *)(iVar1 + 0x87b5e) = 0;
          fence();
          *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fd) = 1;
          fence();
          *(undefined4 *)(iVar1 + 0x54) = 0;
          fence();
          fence();
          *(undefined4 *)(iVar1 + 0x58) = 0;
          fence();
          goto LAB_ram_480b8e3c;
        }
      }
      else {
        iVar4 = FUN_ram_480b878c(iVar3,&DAT_ram_481cd044,&DAT_ram_481df390,DAT_ram_4ff6dcc8 + 0x63cf
                                 ,&DAT_ram_481df390,&DAT_ram_481df390,&DAT_ram_481df390,
                                 iVar1 + 0xc5a);
        if (iVar4 != 0) {
          *(undefined4 *)(iVar1 + 0x518) = 0x8000;
          *(undefined1 *)(iVar1 + 0x87b5c) = uVar9;
          fence();
          *pcVar10 = '\x01';
          fence();
          *(undefined1 *)(iVar1 + 0x87b5e) = 0;
          fence();
          *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fd) = 1;
          goto LAB_ram_480b8e3c;
        }
      }
LAB_ram_480b8d76:
      FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
      pcVar10 = "endpoint_invalid";
LAB_ram_480b8d96:
      *(char **)(iVar1 + 0x87bc0) = pcVar10;
      return 0;
    }
    FUN_ram_4ff45158(iVar1 + 0xc5a,"https://tesla.srlt.cc/api/p4/ota/management",0x2c);
    *(undefined4 *)(iVar1 + 0x518) = 0x1000;
  }
  *(undefined1 *)(iVar1 + 0x87b5c) = uVar9;
  fence();
  *pcVar10 = '\x01';
  fence();
  *(undefined1 *)(iVar1 + 0x87b5e) = 0;
  fence();
  *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fd) = 1;
LAB_ram_480b8e3c:
  if (((DAT_ram_4ff6dcc0 == 0) && (uVar6 = FUN_ram_48001f84(0x804), 0x20fff < uVar6)) &&
     ((uVar6 = FUN_ram_480020c6(0x804), 0x3fff < uVar6 &&
      (((DAT_ram_4ff6dc9c != 0 && (fence(), *(char *)(DAT_ram_4ff6dc9c + 0x87b5d) != '\0')) &&
       (iVar4 = FUN_ram_481a7a6a(FUN_ram_480a275c,"cloud_upload",0x2000,0,1,&DAT_ram_4ff6dcc0,0,
                                 0x404), iVar4 == 1)))))) {
    FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
    return 1;
  }
  fence();
  *pcVar10 = '\0';
  fence();
  DAT_ram_4ff6dcc0 = 0;
  *(undefined1 *)(DAT_ram_4ff6dcc8 + 0x63fd) = 0;
  iVar4 = FUN_ram_48025ba6();
  uVar7 = DAT_ram_4ff6dcc4;
  *(int *)(iVar1 + 0x87b50) = iVar4 + 1000;
  FUN_ram_4ff3afa2(uVar7,0,0,0);
  *(char **)(iVar1 + 0x87bc0) = "resource_wait";
  return 0;
}


