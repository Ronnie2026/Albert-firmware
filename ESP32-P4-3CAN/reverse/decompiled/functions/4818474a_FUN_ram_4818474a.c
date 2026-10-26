/* Firmware entry: 0x4818474a */

int FUN_ram_4818474a(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (param_5 < param_3) {
    return -0x16;
  }
  *param_6 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  if ((param_2 < param_4) && (param_4 - param_2 < param_3)) {
    return -0x14;
  }
  uVar3 = *(uint *)(param_1 + 0x148);
  uVar4 = *(uint *)(param_1 + 0x14c);
  uVar6 = param_3 + uVar3;
  uVar5 = (uVar6 < param_3) + uVar4;
  if ((uVar5 < uVar4) ||
     ((((uVar4 == uVar5 && (uVar6 < uVar3)) || (0xf < uVar5)) ||
      ((uVar5 == 0xf && (0xffffffe0 < uVar6)))))) {
    return -0x14;
  }
  if (uVar4 == 0 && uVar3 == 0) {
    if (((*(uint *)(param_1 + 0x150) & 0xf) != 0) && (*(char *)(param_1 + 0x189) == '\0')) {
      FUN_ram_48183e34(param_1 + 0x178,param_1 + 0x178,param_1 + 0x48);
    }
LAB_ram_48184840:
    *(uint *)(param_1 + 0x14c) = uVar5;
    *(uint *)(param_1 + 0x148) = uVar6;
    if (0xf < param_3) {
LAB_ram_48184850:
      do {
        while( true ) {
          uVar5 = param_3;
          uVar4 = param_4;
          uVar3 = param_2;
          iVar1 = __bswapsi2(*(undefined4 *)(param_1 + 0x174));
          uVar2 = __bswapsi2(iVar1 + 1);
          *(char *)(param_1 + 0x174) = (char)uVar2;
          *(char *)(param_1 + 0x175) = (char)((uint)uVar2 >> 8);
          *(char *)(param_1 + 0x176) = (char)((uint)uVar2 >> 0x10);
          *(char *)(param_1 + 0x177) = (char)((uint)uVar2 >> 0x18);
          iVar1 = FUN_ram_4818403c(param_1,&local_40,0,0x10,uVar3,uVar4);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (*(char *)(param_1 + 0x189) != '\0') break;
          FUN_ram_48183e34(param_1 + 0x178,param_1 + 0x178,param_1 + 0x48);
          param_2 = uVar3 + 0x10;
          param_4 = uVar4 + 0x10;
          param_3 = uVar5 - 0x10;
          if (uVar5 - 0x10 < 0x10) goto LAB_ram_481848e2;
        }
        param_2 = uVar3 + 0x10;
        param_4 = uVar4 + 0x10;
        param_3 = uVar5 - 0x10;
      } while (0xf < uVar5 - 0x10);
LAB_ram_481848e2:
      param_3 = uVar5 - 0x10;
      param_4 = uVar4 + 0x10;
      param_2 = uVar3 + 0x10;
      goto joined_r0x481848e4;
    }
  }
  else {
    uVar3 = uVar3 & 0xf;
    if (uVar3 == 0) goto LAB_ram_48184840;
    uVar4 = 0x10 - uVar3;
    if (param_3 < 0x10 - uVar3) {
      uVar4 = param_3;
    }
    iVar1 = FUN_ram_4818403c(param_1,&local_40,uVar3,uVar4,param_2,param_4);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((uVar4 + uVar3 == 0x10) && (*(char *)(param_1 + 0x189) == '\0')) {
      FUN_ram_48183e34(param_1 + 0x178,param_1 + 0x178,param_1 + 0x48);
    }
    param_3 = param_3 - uVar4;
    uVar3 = *(int *)(param_1 + 0x148) + uVar4;
    *(uint *)(param_1 + 0x14c) =
         (uint)(uVar3 + param_3 < uVar3) + (uint)(uVar3 < uVar4) + *(int *)(param_1 + 0x14c);
    *(uint *)(param_1 + 0x148) = uVar3 + param_3;
    param_2 = param_2 + uVar4;
    param_4 = param_4 + uVar4;
    if (0xf < param_3) goto LAB_ram_48184850;
joined_r0x481848e4:
    if (param_3 == 0) goto LAB_ram_48184806;
  }
  iVar1 = __bswapsi2(*(undefined4 *)(param_1 + 0x174));
  uVar2 = __bswapsi2(iVar1 + 1);
  *(char *)(param_1 + 0x174) = (char)uVar2;
  *(char *)(param_1 + 0x176) = (char)((uint)uVar2 >> 0x10);
  *(char *)(param_1 + 0x177) = (char)((uint)uVar2 >> 0x18);
  *(char *)(param_1 + 0x175) = (char)((uint)uVar2 >> 8);
  iVar1 = FUN_ram_4818403c(param_1,&local_40,0,param_3,param_2,param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_ram_48184806:
  FUN_ram_48178af2(&local_40,0x10);
  return 0;
}


