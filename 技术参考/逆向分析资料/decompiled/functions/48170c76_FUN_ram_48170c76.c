/* Firmware entry: 0x48170c76 */

int FUN_ram_48170c76(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte *pbStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[0x24] != 0) {
    param_1[0x24] = 0;
    return 0;
  }
LAB_ram_48170cac:
  do {
    while( true ) {
      uVar3 = param_1[0x22];
      if (uVar3 == 0) break;
      if (param_1[0x1e] != 0) {
        return -0x6c00;
      }
      uVar4 = param_1[0x20];
      if (param_1[5] == 0) {
        if (uVar4 <= uVar3) {
          param_1[0x20] = 0;
          param_1[0x22] = 0;
          goto LAB_ram_48170cd0;
        }
        param_1[0x20] = uVar4 - uVar3;
        FUN_ram_4ff4522c(param_1[0x1d],uVar3 + param_1[0x1d]);
        iVar2 = param_1[0x20];
        puVar5 = (undefined1 *)param_1[0x1b];
        *puVar5 = (char)((uint)iVar2 >> 8);
        puVar5[1] = (char)iVar2;
        uVar4 = param_1[0x20];
        param_1[0x22] = 0;
      }
joined_r0x48170e6a:
      if (uVar4 == 0) {
        iVar2 = FUN_ram_481705ca(param_1,5);
        goto joined_r0x48170e74;
      }
LAB_ram_48170e34:
      iVar2 = FUN_ram_48170bb8(param_1);
      if ((iVar2 + 0x6680U & 0xfffffeff) != 0) {
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((((param_1[0x1f] == 0x16) && (param_2 == 1)) && (param_1[1] < 0x1b)) &&
           (param_1[0x10] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x48170f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar2 = (**(code **)(param_1[0x10] + 0x14))(param_1,param_1[0x1d],param_1[0x22]);
          return iVar2;
        }
        return 0;
      }
    }
    if (param_1[0x1e] != 0) {
      uVar4 = param_1[0x20];
      goto joined_r0x48170e6a;
    }
    param_1[0x20] = 0;
LAB_ram_48170cd0:
    iVar2 = FUN_ram_481705ca(param_1,5);
joined_r0x48170e74:
    if (iVar2 != 0) {
LAB_ram_48170e78:
      if (iVar2 != -0x6580) {
        return iVar2;
      }
      goto LAB_ram_48170cac;
    }
    pbStack_40 = (byte *)param_1[0x1a];
    if (((uint)param_1[0x21] < 5) || (bStack_44 = *pbStack_40, 3 < (byte)(bStack_44 - 0x14))) {
      return -0x7200;
    }
    bStack_43 = pbStack_40[1];
    bStack_42 = pbStack_40[2];
    if (*(uint *)*param_1 <
        ((uint)(*(ushort *)(pbStack_40 + 1) >> 8) | (*(ushort *)(pbStack_40 + 1) & 0xff) << 8)) {
      return -0x7200;
    }
    puVar5 = (undefined1 *)param_1[0x19];
    uStack_48 = puVar5[4];
    uStack_46 = puVar5[6];
    uStack_4c = *puVar5;
    uStack_4b = puVar5[1];
    uStack_4a = puVar5[2];
    uStack_49 = puVar5[3];
    uStack_47 = puVar5[5];
    uStack_45 = puVar5[7];
    iStack_38 = 5;
    uStack_34 = (uint)(*(ushort *)(pbStack_40 + 3) >> 8) | (*(ushort *)(pbStack_40 + 3) & 0xff) << 8
    ;
    iStack_3c = uStack_34 + 5;
    if (uStack_34 == 0) {
      return -0x7200;
    }
    iVar2 = FUN_ram_481705ca(param_1);
    if (iVar2 != 0) goto LAB_ram_48170e78;
    param_1[0x21] = 0;
    if (param_1[0x11] == 0) {
LAB_ram_48170e0c:
      if (0x4000 < uStack_34) {
        return -0x7200;
      }
      param_1[0x20] = uStack_34;
      param_1[0x1b] = param_1[0x1a] + 3;
      param_1[0x1c] = param_1[0x1a] + 5;
      param_1[0x1d] = (int)(pbStack_40 + iStack_38);
      param_1[0x19] = param_1[0x18];
      param_1[0x1f] = (uint)bStack_44;
      goto LAB_ram_48170e34;
    }
    iVar2 = FUN_ram_4816fdd0(param_1,param_1[0x11],&uStack_4c);
    if (iVar2 == 0) {
      if (uStack_34 == 0) {
        if ((param_1[4] == 0x303) && (bStack_44 != 0x17)) {
          return -0x7200;
        }
        iVar2 = param_1[0x23];
        param_1[0x23] = iVar2 + 1;
        if (3 < iVar2 + 1) goto LAB_ram_48170eea;
      }
      else {
        param_1[0x23] = 0;
      }
      iVar2 = 8;
      while( true ) {
        iVar2 = iVar2 + -1;
        cVar1 = *(char *)(param_1[0x19] + iVar2);
        *(char *)(param_1[0x19] + iVar2) = cVar1 + '\x01';
        if (cVar1 != -1) break;
        if (iVar2 == 0) {
          return -0x6b80;
        }
      }
      goto LAB_ram_48170e0c;
    }
    if (iVar2 == -0x7180) {
LAB_ram_48170eea:
      if (*param_1 != 0) {
        if (param_1[0x2f] == 0) {
          param_1[0x2e] = 2;
          param_1[0x2d] = 0x15;
          *(undefined1 *)param_1[0x2c] = 2;
          *(undefined1 *)(param_1[0x2c] + 1) = 0x14;
          FUN_ram_48170748(param_1,1);
        }
        else {
          FUN_ram_4817069a(param_1);
        }
      }
      return -0x7180;
    }
    if (iVar2 != -0x6580) {
      return iVar2;
    }
  } while( true );
}


