/* Firmware entry: 0x4ff42bd4 */

void FUN_ram_4ff42bd4(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = (uint *)*param_1;
  uVar3 = puVar2[2];
  uVar8 = (uint)(ushort)puVar2[1];
  uStack_34 = (uint)(byte)((byte)uVar3 & 3 | ((char)param_1[3] != -1) << 2 |
                          (*(byte *)((int)param_1 + 0xd) & 1) << 3);
  if (uVar8 == 0) {
    uVar8 = param_1[2];
    uVar4 = uVar8 & 0xffff;
    if (0x40 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_include_hal__ram_4ff57adc,0x96,&DAT_ram_4ff580fc,
                       s_byte_len_<__TWAIFD_FRAME_MAX_LEN_ram_4ff57ab8);
    }
    if (8 < uVar4) {
      if (0x18 < uVar4) {
        if (uVar4 < 0x21) {
          bVar7 = 0xd;
          uVar4 = 0xd;
        }
        else {
          uVar8 = ((int)(uVar4 - 0x11) >> 4) + 0xd;
          uVar4 = uVar8 & 0xff;
          bVar7 = (byte)uVar8 & 0xf;
        }
        goto LAB_ram_4ff42c5a;
      }
      uVar8 = ((int)(uVar4 - 5) >> 2) + 8;
    }
  }
  uVar4 = uVar8 & 0xff;
  bVar7 = (byte)uVar8 & 0xf;
LAB_ram_4ff42c5a:
  uVar8 = *puVar2;
  iVar9 = param_1[1];
  *param_2 = bVar7 | (byte)((uStack_34 & 8) << 1) | (byte)((uStack_34 & 4) << 3) |
             (byte)((uStack_34 & 2) << 5) | (byte)uVar3 << 7;
  if ((uVar3 & 1) == 0) {
    param_2[1] = (byte)(uVar8 >> 3);
    param_2[2] = (byte)((uVar8 & 0xff) << 5);
    param_2 = param_2 + 3;
  }
  else {
    uVar1 = __bswapsi2(uVar8 << 3);
    param_2[4] = (byte)((uVar8 & 0xff) << 3);
    param_2[1] = (byte)uVar1;
    param_2[2] = (byte)((uint)uVar1 >> 8);
    param_2[3] = (byte)((uint)uVar1 >> 0x10);
    param_2 = param_2 + 5;
  }
  if (((uVar3 & 2) == 0) && (uVar4 != 0)) {
    uVar3 = 0;
    do {
      pbVar5 = (byte *)(iVar9 + uVar3);
      pbVar6 = param_2 + uVar3;
      uVar3 = uVar3 + 1;
      *pbVar6 = *pbVar5;
      if (uVar3 == uVar4) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
    } while (uVar3 != 8);
  }
  return;
}


