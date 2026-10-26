/* Firmware entry: 0x4ff2bd72 */

void FUN_ram_4ff2bd72(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff4b988 != 0) {
    uVar8 = *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x5c);
    if (uVar8 == 0) {
      uVar8 = *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x60);
    }
    else {
      do {
        iVar2 = DAT_ram_4ff4b988;
        iVar1 = __ffssi2(uVar8);
        uVar3 = iVar1 - 1;
        uVar5 = 1 << (uVar3 & 0x1f);
        puVar6 = (undefined4 *)(iVar2 + uVar3 * 8);
        pcVar4 = (code *)*puVar6;
        uVar8 = uVar8 & ~uVar5;
        if ((int)(iVar1 - 0x21U) < 0) {
          uVar3 = DAT_ram_4ff4b990 >> (uVar3 & 0x1f) |
                  (DAT_ram_4ff4b994 << 1) << (0x1f - uVar3 & 0x1f);
        }
        else {
          uVar3 = DAT_ram_4ff4b994 >> (iVar1 - 0x21U & 0x1f);
        }
        if ((uVar3 & 1) == 0) {
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(puVar6[1]);
          }
          *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x4c) = uVar5;
        }
        else {
          *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x4c) = uVar5;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(puVar6[1]);
          }
        }
      } while (uVar8 != 0);
      uVar8 = *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x60);
    }
    uVar8 = uVar8 & 0x1ffffff;
    if (uVar8 != 0) {
      do {
        while( true ) {
          iVar2 = __ffssi2(uVar8);
          uVar5 = iVar2 - 1;
          uVar3 = iVar2 + 0x1f;
          uVar7 = 1 << (uVar5 & 0x1f);
          puVar6 = (undefined4 *)(DAT_ram_4ff4b988 + uVar3 * 8);
          uVar8 = uVar8 & ~uVar7;
          pcVar4 = (code *)*puVar6;
          if ((int)uVar5 < 0) {
            uVar3 = DAT_ram_4ff4b990 >> (uVar3 & 0x1f) |
                    (DAT_ram_4ff4b994 << 1) << (0x1f - uVar3 & 0x1f);
          }
          else {
            uVar3 = DAT_ram_4ff4b994 >> (uVar5 & 0x1f);
          }
          if ((uVar3 & 1) != 0) break;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(puVar6[1]);
          }
          *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x58) =
               uVar7 & 0x1ffffff |
               *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x58) & 0xfe000000;
          if (uVar8 == 0) {
            return;
          }
        }
        *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x58) =
             *(uint *)(*(int *)PTR_DAT_ram_4ff47f08_ram_4ff4b978 + 0x58) & 0xfe000000 |
             uVar7 & 0x1ffffff;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(puVar6[1]);
        }
      } while (uVar8 != 0);
      return;
    }
  }
  return;
}


