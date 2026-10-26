/* Firmware entry: 0x480d7266 */

void FUN_ram_480d7266(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
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
  cVar2 = *(char *)(param_2 + 7);
  if (cVar2 == '\x05') {
    uVar4 = FUN_ram_48025ba6();
    if (*(int *)(param_2 + 4) == param_1[0x6e]) {
      uStack_6c = *(undefined2 *)(param_1 + 0x6f);
      uStack_6a = *(undefined1 *)((int)param_1 + 0x1be);
      uStack_48 = param_1[0x78];
      uStack_68 = param_1[0x70];
      uStack_64 = param_1[0x71];
      uStack_60 = param_1[0x72];
      uStack_5c = param_1[0x73];
      uStack_58 = param_1[0x74];
      uStack_54 = param_1[0x75];
      uStack_50 = param_1[0x76];
      uStack_4c = param_1[0x77];
      uStack_2c = 0x10000;
      param_1[0x6e] = 0;
      uStack_44 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      *(undefined2 *)(param_1 + 0x6f) = 0;
      *(undefined1 *)((int)param_1 + 0x1be) = 0;
      uStack_40 = 8;
      uStack_28 = 0;
      param_1[0x71] = 8;
      param_1[0x76] = 0x10000;
      param_1[0x70] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x77] = 0;
      param_1[0x78] = 0;
      uStack_24 = 0;
      if ((*(char *)(param_2 + 0x14) == '\0') || (*(int *)(param_2 + 8) == 0)) {
        FUN_ram_48049638(param_1 + 0x19,&uStack_6c,0,uVar4);
        iVar3 = param_1[99];
      }
      else {
        FUN_ram_48049638(param_1 + 0x19,&uStack_6c,1,uVar4);
        iVar3 = *(int *)(param_2 + 8);
        param_1[99] = iVar3;
        *(undefined2 *)(param_1 + 100) = uStack_6c;
        *(undefined1 *)((int)param_1 + 0x192) = uStack_6a;
        param_1[0x65] = uStack_68;
        param_1[0x48] = uStack_68;
        param_1[0x66] = uStack_64;
        param_1[0x49] = uStack_64;
        param_1[0x67] = uStack_60;
        param_1[0x4a] = uStack_60;
        param_1[0x68] = uStack_5c;
        param_1[0x4b] = uStack_5c;
        param_1[0x69] = uStack_58;
        param_1[0x4c] = uStack_58;
        param_1[0x6a] = uStack_54;
        param_1[0x4d] = uStack_54;
        param_1[0x6b] = uStack_50;
        param_1[0x4e] = uStack_50;
        param_1[0x6c] = uStack_4c;
        param_1[0x4f] = uStack_4c;
        param_1[0x6d] = uStack_48;
        param_1[0x50] = uStack_48;
        param_1[0x52] = uVar4;
      }
      if (((iVar3 == 0) && (*(char *)(param_1 + 0x79) == '\0')) &&
         (*(char *)((int)param_1 + 0x9e) == '\0')) {
        *(undefined1 *)((int)param_1 + 0x1e5) = 0;
        FUN_ram_48025ba6();
        if (*(char *)((int)param_1 + 0x65) == '\v') {
          FUN_ram_4805c6b0(*param_1,2,2,7);
        }
        puVar5 = (uint *)param_1[3];
        fence();
        uVar6 = *puVar5;
        do {
          uVar8 = uVar6 & 0xfffcffff;
          if ((uVar6 >> 0x10 & 3) != 1) {
            return;
          }
          if ((uVar6 & 0xffff) == 0) {
            return;
          }
          bVar1 = *puVar5 != uVar6;
          uVar6 = *puVar5;
        } while (bVar1);
        *puVar5 = uVar8 - 1;
      }
    }
  }
  else {
    if (cVar2 == '\a') {
      iVar3 = FUN_ram_48025ba6();
      if (*(int *)(param_2 + 4) == param_1[0x1cf]) {
        uStack_24 = param_1[0x1d8];
        uStack_44 = param_1[0x1d0];
        uStack_40 = param_1[0x1d1];
        uStack_3c = param_1[0x1d2];
        uStack_38 = param_1[0x1d3];
        uStack_34 = param_1[0x1d4];
        uStack_30 = param_1[0x1d5];
        uStack_2c = param_1[0x1d6];
        uStack_28 = param_1[0x1d7];
        param_1[0x1d0] = 0;
        param_1[0x1d1] = 0;
        param_1[0x1d2] = 0;
        param_1[0x1d3] = 0;
        param_1[0x1d4] = 0;
        param_1[0x1d5] = 0;
        param_1[0x1d6] = 0;
        param_1[0x1d7] = 0;
        param_1[0x1d8] = 0;
        cVar2 = *(char *)(param_2 + 0x14);
        param_1[0x1cf] = 0;
        if ((cVar2 != '\0') && (iVar7 = *(int *)(param_2 + 8), iVar7 != 0)) {
          if (*(char *)(param_1 + 0xf8) != '\0') {
            uVar4 = *(undefined4 *)(param_2 + 0x10);
            cVar2 = *(char *)((int)param_1 + 0x3bf);
            param_1[0xf9] = iVar7;
            param_1[0xfa] = uVar4;
            *(undefined1 *)((int)param_1 + 0x3ed) = *(undefined1 *)((int)param_1 + 0x3be);
            *(char *)(param_1 + 0xfb) = cVar2;
            FUN_ram_4ff45158(param_1 + 0xfc,param_1 + 0xf4,0xe);
            param_1[0x101] = iVar3;
            param_1[0x100] = param_1[0xbb];
            if (((byte)(cVar2 - 2U) < 2) || (cVar2 == '\x05')) {
              param_1[0xe8] = 0;
            }
            param_1[0xef] = 0;
            param_1[0xf0] = 0;
            param_1[0xf1] = 0;
            param_1[0xf2] = 0;
            param_1[0xf3] = 0;
            param_1[0xf4] = 0;
            param_1[0xf5] = 0;
            param_1[0xf6] = 0;
            param_1[0xf7] = 0;
            iVar7 = *(int *)(param_2 + 8);
            *(undefined1 *)(param_1 + 0xf8) = 0;
          }
          param_1[0x1e7] = iVar7;
          FUN_ram_4ff45158(param_1 + 0x1e8,&uStack_30,0xe);
          return;
        }
        if (*(char *)(param_1 + 0xf8) != '\0') {
          *(undefined1 *)(param_1 + 0xf8) = 0;
          param_1[0xf0] = 0;
          param_1[0xf1] = 0;
          param_1[0xf2] = 0;
          param_1[0xf3] = 0;
          param_1[0xf4] = 0;
          param_1[0xf5] = 0;
          param_1[0xf6] = 0;
          param_1[0xf7] = 0;
          param_1[0x105] = param_1[0x105] + 1;
          *(undefined1 *)((int)param_1 + 0x35b) = 5;
          param_1[0xef] = 0;
          if (*(char *)((int)param_1 + 0x3be) == '\0') {
            if (((byte)(*(char *)((int)param_1 + 0x3bf) - 2U) < 2) ||
               (*(char *)((int)param_1 + 0x3bf) == '\x05')) {
              *(undefined1 *)((int)param_1 + 0x39d) = 1;
              param_1[0xe8] = iVar3 + 5;
            }
            else {
              FUN_ram_4804a9c8(param_1 + 0xae,iVar3,5,'\a' - *(char *)(param_1 + 0xd9));
            }
          }
          else {
            if ((param_1[0xf9] != 0) && (param_1[0x102] == 0)) {
              param_1[0x102] = param_1[0xf9];
            }
            param_1[0xf9] = 0;
            param_1[0xfa] = 0;
            *(undefined2 *)(param_1 + 0xfb) = 0;
            param_1[0x100] = 0;
            param_1[0x101] = 0;
            param_1[0xef] = 0;
            param_1[0xf0] = 0;
            param_1[0xf1] = 0;
            param_1[0xf2] = 0;
            param_1[0xf3] = 0;
            param_1[0xf4] = 0;
            param_1[0xf5] = 0;
            param_1[0xf6] = 0;
            param_1[0xf7] = 0;
            *(undefined1 *)((int)param_1 + 0x35d) = 0;
            *(undefined1 *)((int)param_1 + 0x35e) = 0;
            param_1[0xd8] = 0;
            *(undefined2 *)(param_1 + 0xd9) = 0;
            *(undefined1 *)(param_1 + 0xe1) = 0;
            param_1[0xe2] = 0;
            param_1[0xe3] = 0;
            *(undefined1 *)(param_1 + 0xe5) = 0;
            param_1[0xe6] = 0;
            *(undefined2 *)(param_1 + 0xe7) = 0;
            param_1[0xe8] = 0;
            *(undefined1 *)((int)param_1 + 0x371) = 0;
            param_1[0xee] = 0;
            *(undefined2 *)(param_1 + 0xd6) = 5;
            *(undefined1 *)((int)param_1 + 0x35a) = 10;
          }
        }
        if ((*(char *)(param_1 + 499) != '\0') &&
           (iVar3 = FUN_ram_480a108a(param_1,iVar3), iVar3 == 0)) {
          *(undefined1 *)(param_1 + 499) = 0;
          FUN_ram_480553f6(param_1[3]);
          return;
        }
      }
      return;
    }
    if (cVar2 == '\x02') {
      if ((*(char *)(param_2 + 0x14) == '\0') || (*(int *)(param_2 + 8) == 0)) {
        FUN_ram_480d6e22(param_1,param_2);
      }
      else {
        uVar4 = FUN_ram_48025ba6();
        FUN_ram_480d6386(param_1,param_2,uVar4);
      }
      if (((((*(uint *)(param_2 + 0x18) ^ param_1[0x18a]) & 0xffff) == 0) &&
          (*(int *)(param_2 + 0x20) == param_1[0x18c])) &&
         (*(int *)(param_2 + 0x24) == param_1[0x18d])) {
        param_1[0x18c] = 0;
        param_1[0x18d] = 0;
        *(undefined2 *)(param_1 + 0x18a) = 0xff00;
      }
    }
  }
  return;
}


